#include "read_obj.h"

#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int readobj(char* file_name, obj_t* obj) {
  int err = -1;
  FILE* file;
  file = fopen(file_name, "r");
  if (file) {
    obj->count_of_facets = 0;
    obj->count_of_vertexes = 0;
    char ch = ' ';
    int cur_index = 0;
    const char* space = " ";
    const char* slash = "/";
    char *temp_str, *token, *str1, *str2, *subtoken, *saveptr2;
    int i = 0, j = 0, p = 0, v_count = 0, dots = 0;

    while (1) {
      char buf[255] = "";
      fgets(buf, 254, file);
      if (feof(file)) break;
      if (buf[0] == 'v' && buf[1] == ' ') {
        obj->count_of_vertexes++;
      } else if (buf[0] == 'f') {
        obj->count_of_facets++;
        for (j = 1, str1 = buf + 2;; j++, str1 = NULL) {
          token = strtok_r(str1, space, &temp_str);
          if (token == NULL) break;
          if (!strpbrk(token, "0123456789")) break;
          for (str2 = token, v_count = 0;; str2 = NULL) {
            subtoken = strtok_r(str2, slash, &saveptr2);
            if (subtoken == NULL) break;
            if (v_count == 0) {
              dots++;
            }
            v_count++;
          }
        }
      }
    }
    if (obj->vertexes =
            (double*)calloc(obj->count_of_vertexes * 3, sizeof(double))) {
      if (obj->polygons = (int*)calloc(dots * 2, sizeof(int))) {
        fseek(file, 0, SEEK_SET);
        i = 0, p = 0, v_count = 0;
        int temp_f = 0, temp_ind = 0;
        while (1) {
          char buf[255] = "";
          fgets(buf, 254, file);
          if (feof(file)) break;
          if (buf[0] == 'v' && buf[1] == ' ') {
            sscanf(buf, "%c %lf %lf %lf", &ch, &obj->vertexes[i++],
                   &obj->vertexes[i++], &obj->vertexes[i++]);
            double temp = obj->vertexes[i - 1];
            obj->vertexes[i - 1] = obj->vertexes[i - 3];
            obj->vertexes[i - 3] = temp;

          } else if (buf[0] == 'f') {
            for (temp_ind = 0, str1 = buf + 2;; str1 = NULL, temp_ind++) {
              token = strtok_r(str1, space, &temp_str);
              if (token == NULL) {
                obj->polygons[p++] = temp_f;
                break;
              }
              if (!strpbrk(token, "0123456789")) {
                obj->polygons[p++] = temp_f;
                break;
              }

              for (str2 = token, v_count = 0;; str2 = NULL, v_count++) {
                subtoken = strtok_r(str2, slash, &saveptr2);
                if (subtoken == NULL) {
                  break;
                } else if (v_count == 0) {
                  cur_index = atoi(subtoken) - 1;
                  obj->polygons[p++] = cur_index;
                  if (temp_ind == 0) {
                    temp_f = cur_index;
                  } else {
                    obj->polygons[p++] = cur_index;
                  }
                }
              }
            }
          }

          err = p;
        }
      } else {
        free(obj->vertexes);
        err = -1;
      }
    } else {
      err = -1;
    }
    fclose(file);
  }

  return err;
}
