#include "s21_viewer.h"

int parse_num_vertex_facets(const char* filename, obj_t* obj) {
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) return 1;

  char buffer[5];
  while (fgets(buffer, sizeof(buffer), fp) != NULL) {
    if (buffer[0] == 'v' && buffer[1] == ' ') {
      obj->count_of_vertexes += 1;
    }
    if (buffer[0] == 'f' && buffer[1] == ' ') {
      obj->count_of_facets += 1;
    }
  }
  // obj->count_of_facets *= 2;
  fclose(fp);
  return 0;
}

void free_obj(obj_t* obj) {
  free(obj->vertexes);
  free(obj->polygons);
}

int init_obj_struct(obj_t* obj) {
  obj->vertexes = (double*)calloc(obj->count_of_vertexes * 3, sizeof(double));
  if (obj->vertexes == NULL) return 1;
  obj->polygons = (int*)calloc(obj->count_of_facets * 6, sizeof(int));
  if (obj->polygons == NULL) return 1;
  return 0;
}

int check_double_format(char* str) {
  int i = 0;
  while (str[i] != '\0') {
    if (isdigit(str[i]) == 0 && str[i] != '.' && str[i] != '-' && str[i] != '/')
      return 1;
    ++i;
  }
  return 0;
}

int fill_arr(obj_t* obj, int* j, char* buffer, int checkflag) {
  int i = 2, counter = 0, countelement = 0, firstelemfaset = 0;
  char digits[36];
  char* jumpslash;
  int elem;
  while (countelement < 3) {
    if (buffer[i] == ' ' || buffer[i + 1] == '\0') {
      if (counter != 0) {
        if (check_double_format(digits) == 1) {
          return 1;
        }
        switch (checkflag) {
          case 1:
            obj->vertexes[*j] = atof(digits);
            ++*j;
            counter = 0;
            break;
          case 2:
            jumpslash = strtok(digits, "/");
            elem = atoi(jumpslash);
            obj->polygons[*j] = elem - 1;
            if (countelement == 0) {
              firstelemfaset = obj->polygons[*j];
            }
            if (countelement == 1) {
              obj->polygons[++*j] = obj->polygons[*j];
            }
            if (countelement == 2) {
              obj->polygons[++*j] = obj->polygons[*j];
              obj->polygons[++*j] = firstelemfaset;
            }
            ++*j;
            counter = 0;
            break;
        }
        ++countelement;
      }
    } else {
      digits[counter] = buffer[i];
      digits[++counter] = '\0';
    }
    ++i;
  }
  return 0;
}

int parse_file(const char* filename, obj_t* obj) {
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) return 1;
  char buffer[255];
  int countvertex = 0;
  int countfacets = 0;
  int checkflag;
  while (fgets(buffer, sizeof(buffer), fp) != NULL) {
    if (buffer[0] == 'v' && buffer[1] == ' ') {
      checkflag = 1;
      if (fill_arr(obj, &countvertex, buffer, checkflag) == 1) return 1;
    }
    if (buffer[0] == 'f' && buffer[1] == ' ') {
      checkflag = 2;
      if (fill_arr(obj, &countfacets, buffer, checkflag) == 1) return 1;
    }
  }
  fclose(fp);
  return 0;
}

int StartPars(const char* filename, obj_t* obj) {
  obj->count_of_vertexes = 0;
  obj->count_of_facets = 0;

  if (parse_num_vertex_facets(filename, obj) == 1) {
    return 1;
  }
  if (init_obj_struct(obj) == 1) {
    return 1;
  }
  if (parse_file(filename, obj) == 1) {
    return 1;
  }
  return 0;
}

//int main() {
//  obj_t obj;
//  char* file = "obj/cat.obj";
//  int err = StartPars(file, &obj);
//
//  printf("[count vertex]-%d  [count facets]-%d\n", obj.count_of_vertexes,
//         obj.count_of_facets);
//
//  // if (err != 1) {
//  for (int i = 0, k = 1; i < obj.count_of_vertexes; i++, k++) {
//    printf("%lf ", obj.vertexes[i]);
//    if (k % 3 == 0) printf("\n");
//  }
//  // getchar();
//  for (int i = 0, k = 1; i < obj.count_of_facets; i++, k++) {
//    printf("%d ", obj.polygons[i]);
//    if (k % 6 == 0) printf("\n");
//  }
//  free_obj(&obj);
//  // }
//  return 0;
//}
