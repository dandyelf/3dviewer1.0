#include "s21_viewer.h"

int parse_num_vertex_facets(const char *filename, obj_t *obj) {
  int err = 0;
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    err = 1;
  } else {
    char buffer[255];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
      if (buffer[0] == 'v' && buffer[1] == ' ') {
        obj->count_of_vertexes += 1;
      }
      if (buffer[0] == 'f' && buffer[1] == ' ') {
        obj->count_of_facets += 1;
        count_facets(buffer, obj);
      }
    }
    fclose(fp);
  }
  obj->facet_elem *= 2;
  return err;
}

void count_facets(char *buffer, obj_t *obj) {
  int i = 2;
  while (buffer[i] != '\0') {
    char *tok = strtok(buffer, " ");
    while (tok != NULL) {
      if (*(tok) != 'f' && *(tok) != '\n') {
        obj->facet_elem++;
      }
      tok = strtok(NULL, " ");
    }
    ++i;
  }
}

int init_obj_struct(obj_t *obj) {
  int err = 0;
  obj->vertexes = (double *)calloc(obj->count_of_vertexes * 3, sizeof(double));
  if (obj->vertexes == NULL)
    err = 1;
  obj->polygons = (int *)calloc(obj->facet_elem, sizeof(int));
  if (obj->polygons == NULL)
    err = 1;
  return err;
}

int parse_file(const char *filename, obj_t *obj) {
  int err = 0;
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    err = 1;
  } else {
    char buffer[255];
    int countvertex = 0, v_count = 0, countfacets = 0, cur_index = 0;
    char *temp_str, *token, *str1, *str2, *subtoken, *saveptr2;
    int temp_f = 0, temp_ind = 0;

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
      if (buffer[0] == 'v' && buffer[1] == ' ') {
        sscanf(buffer + 2, "%lf %lf %lf", &obj->vertexes[countvertex],
               &obj->vertexes[countvertex + 1],
               &obj->vertexes[countvertex + 2]);
        countvertex += 3;
      }

      if (buffer[0] == 'f' && buffer[1] == ' ') {
        for (temp_ind = 0, str1 = buffer + 2;; str1 = NULL, temp_ind++) {
          token = strtok_r(str1, " ", &temp_str);
          if (token == NULL) {
            obj->polygons[countfacets++] = temp_f;
            break;
          }
          if (!strpbrk(token, "0123456789")) {
            obj->polygons[countfacets++] = temp_f;
            break;
          }
          for (str2 = token, v_count = 0;; str2 = NULL, v_count++) {
            subtoken = strtok_r(str2, "/", &saveptr2);
            if (subtoken == NULL) {
              break;
            } else if (v_count == 0) {
              cur_index = atoi(subtoken) - 1;
              obj->polygons[countfacets++] = cur_index;
              if (temp_ind == 0) {
                temp_f = cur_index;
              } else {
                obj->polygons[countfacets++] = cur_index;
              }
            }
          }
        }
      }
    }
    fclose(fp);
  }
  return err;
}

int StartPars(const char *filename, obj_t *obj) {
  int err = 0;
  obj->count_of_vertexes = 0;
  obj->count_of_facets = 0;
  obj->facet_elem = 0;

  err = parse_num_vertex_facets(filename, obj);

  if (!err) {
    err = init_obj_struct(obj);
  }
  if (!err) {
    err = parse_file(filename, obj);
  }
  return err;
}
