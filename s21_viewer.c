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

// int fill_arr(obj_t* obj, int* j, char* buffer, int checkflag) {
//   int i = 2, counter = 0, countelement = 0, tmp_i = 0,
//       tmp_facets[15];  // firstelemfaset = 0;
//   char digits[36];
//   char* jumpslash;
//   int elem = 0;
//   while (1) {
//     //  printf("%s\n", buffer);
//     if (buffer[i] == ' ' || buffer[i + 1] == '\0') {
//       if (counter != 0) {
//         if (check_double_format(digits) == 1) {
//           return 1;
//         }
//         switch (checkflag) {
//           case 1:
//             if (countelement == 3) break;
//             obj->vertexes[*j] = atof(digits);
//             ++*j;
//             counter = 0;
//             break;
//           case 2:
//             jumpslash = strtok(digits, "/");
//             elem = atoi(jumpslash);
//             tmp_facets[tmp_i] = elem - 1;
//             tmp_i++;
//             counter = 0;
//             break;
//         }
//         ++countelement;
//       }
//     } else {
//       digits[counter] = buffer[i];
//       digits[++counter] = '\0';
//       //   printf("%s\n", digits);
//     }
//     ++i;
//     if (buffer[i] == '\0') {
//       break;
//     }
//   }
//   if (checkflag == 2) {
//     change_facets(obj, tmp_facets, j, tmp_i);
//   }
//   // printf("End func");
//   return 0;
// }

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

int fill_arr(obj_t* obj, int* j, char* buffer, int checkflag) {
  sscanf(buffer + 2, "%lf %lf %lf", &obj->vertexes[*j], &obj->vertexes[*j + 1],
         &obj->vertexes[*j + 2]);
  *j += 3;
  // double temp = obj->vertexes[i - 1];
  // obj->vertexes[i - 1] = obj->vertexes[i - 3];
  // obj->vertexes[i - 3] = temp;
  return 0;
}

int parse_file(const char* filename, obj_t* obj) {
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) return 1;

  char buffer[255];
  int countvertex = 0;
  int countfacets = 0;
  int checkflag;
  char ch;

  int i = 0, j = 0, p = 0, v_count = 0, dots = 0;
  int cur_index = 0;
  const char* space = " ";
  const char* slash = "/";
  char *temp_str, *token, *str1, *str2, *subtoken, *saveptr2;
  int temp_f = 0, temp_ind = 0;

  while (fgets(buffer, sizeof(buffer), fp) != NULL) {
    if (buffer[0] == 'v' && buffer[1] == ' ') {
      sscanf(buffer + 2, "%lf %lf %lf", &obj->vertexes[countvertex],
             &obj->vertexes[countvertex + 1], &obj->vertexes[countvertex + 2]);
      countvertex += 3;
      // sscanf(buffer + 2, "%lf %lf %lf", &obj->vertexes[countvertex++],
      //        &obj->vertexes[countvertex++], &obj->vertexes[countvertex++]);
      // double temp = obj->vertexes[i - 1];
      // obj->vertexes[i - 1] = obj->vertexes[i - 3];
      // obj->vertexes[i - 3] = temp;
      // checkflag = 1;
      // if (fill_arr(obj, &countvertex, buffer, checkflag) == 1) return 1;
    }

    if (buffer[0] == 'f' && buffer[1] == ' ') {
      //    printf("%s\n", buffer);

      for (temp_ind = 0, str1 = buffer + 2;; str1 = NULL, temp_ind++) {
        token = strtok_r(str1, space, &temp_str);
        // printf("%s\n", token);
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
          // printf("%s\n", subtoken);
          if (subtoken == NULL) {
            break;
          } else if (v_count == 0) {
            cur_index = atoi(subtoken) - 1;
            //  printf("%d\n", cur_index);
            obj->polygons[p++] = cur_index;
            // printf("%d", obj->polygons[p]);
            if (temp_ind == 0) {
              temp_f = cur_index;
            } else {
              obj->polygons[p++] = cur_index;
            }
          }
          //     printf("%d", obj->polygons[p]);
        }
      }
      //   checkflag = 2;
      //   if (fill_arr(obj, &countfacets, buffer, checkflag) == 1) return 1;
    }
  }
  fclose(fp);
  return 0;
}

int StartPars(const char* filename, obj_t* obj) {
  obj->count_of_vertexes = 0;
  obj->count_of_facets = 0;

  if (parse_num_vertex_facets(filename, obj) == 1) {
    //   printf("error");
    return 1;
  }
  if (init_obj_struct(obj) == 1) {
    //   printf("erroreeeeee");
    return 1;
  }
  if (parse_file(filename, obj) == 1) {
    //   printf("ffffffff");
    return 1;
  }
  return obj->test * 2;
}

// int main() {
//   obj_t obj;
//   char* file = "obj/cat.obj";

//   obj.test = 0;

//   int err = StartPars(file, &obj);
//   printf("[%d]----facets[%d]-----vertex[%d]\n", obj.test,
//   obj.count_of_facets,
//          obj.count_of_vertexes);
//   //  int err = StartPars(file, &obj);

//   //  printf("[count vertex]-%d  [count facets]-%d\n", obj.count_of_vertexes,
//   //         obj.count_of_facets);

//   // if (err != 1) {
//   // for (int i = 0, k = 1; i < obj.count_of_vertexes * 3; i++, k++) {
//   //   printf("%lf ", obj.vertexes[i]);
//   //   if (k % 3 == 0) printf("\n");
//   // }
//   // //   // getchar();
//   // for (int i = 0, k = 1; i < obj.count_of_facets * 3 * 2; i++, k++) {
//   //   printf("%d ", obj.polygons[i]);
//   //   if (k % 6 == 0) printf("\n");
//   // }
//   // free_obj(&obj);
//   // }
//   return 0;
// }
