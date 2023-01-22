#include "s21_viewer.h"

int parse_num_vertex_facets(const char* filename, obj_t* obj) {
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) return 1;

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
  return 0;
}

void count_facets(char* buffer, obj_t* obj) {
  int i = 2;
  while (buffer[i] != '\0') {
    char* tok = strtok(buffer, " ");
    while (tok != NULL) {
      if (*(tok) != 'f' && *(tok) != '\n') {
        obj->test++;
      }
      tok = strtok(NULL, " ");
    }
    ++i;
  }
}

void free_obj(obj_t* obj) {
  free(obj->vertexes);
  free(obj->polygons);
}

int init_obj_struct(obj_t* obj) {
  obj->vertexes = (double*)calloc(obj->count_of_vertexes * 3, sizeof(double));
  if (obj->vertexes == NULL) return 1;
  obj->polygons = (int*)calloc(obj->test * 2, sizeof(int));
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
  int i = 2, counter = 0, countelement = 0, tmp_i = 0, tmp_facets[15],
      gg = 0;  // firstelemfaset = 0;
  char digits[36];
  char* jumpslash;
  int elem = 0;
  while (1) {
    if (buffer[i] == ' ' || buffer[i + 1] == '\0') {
      if (counter != 0) {
        if (check_double_format(digits) == 1) {
          return 1;
        }
        switch (checkflag) {
          case 1:
            if (countelement == 3) break;
            obj->vertexes[*j] = atof(digits);
            ++*j;
            counter = 0;
            break;
          case 2:
            jumpslash = strtok(digits, "/");
            elem = atoi(jumpslash);
            tmp_facets[tmp_i] = elem - 1;
            tmp_i++;
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
    if (buffer[i] == '\0') {
      break;
    }
  }
  if (checkflag == 2) {
    // printf("%d", tmp_i);
    change_facets(obj, tmp_facets, j, tmp_i);
  }

  return 0;
}

void change_facets(obj_t* obj, int* buf, int* countf, int counttemp) {
  int firstlem = buf[0];
  for (int i = 0; i < counttemp; i++, ++*countf) {
    if (i == counttemp - 1) {
      obj->polygons[*countf] = buf[i];
      obj->polygons[++*countf] = firstlem;
    } else {
      obj->polygons[*countf] = buf[i];
      obj->polygons[++*countf] = buf[i + 1];
    }
  }
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
  return obj->test * 2;
}

// int main() {
//   obj_t obj;
//   char* file = "obj/cube.obj";

//   obj.test = 0;

//   int err = StartPars(file, &obj);
//   printf("[%d]----facets[%d]-----vertex[%d]\n", obj.test,
//   obj.count_of_facets,
//          obj.count_of_vertexes);
//   //  int err = StartPars(file, &obj);

//   //  printf("[count vertex]-%d  [count facets]-%d\n", obj.count_of_vertexes,
//   //         obj.count_of_facets);

//   // if (err != 1) {
//   for (int i = 0, k = 1; i < obj.count_of_vertexes * 3; i++, k++) {
//     printf("%lf ", obj.vertexes[i]);
//     if (k % 3 == 0) printf("\n");
//   }
//   //   // getchar();
//   // for (int i = 0, k = 1; i < obj.count_of_facets * 3 * 2; i++, k++) {
//   //   printf("%d ", obj.polygons[i]);
//   //   if (k % 6 == 0) printf("\n");
//   // }
//   //   free_obj(&obj);
//   // }
//   return 0;
// }
