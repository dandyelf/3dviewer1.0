#include "read_obj.h"

int parse_num_vertex_facets(const char* filename, obj_file* obj) {
  FILE* fp = fopen(filename, "r");
  if (fp == NULL) return 1;
//  int ii = 0;

  char buffer[5];
  while (fgets(buffer, sizeof(buffer), fp) != NULL) {
    if (buffer[0] == 'v' && buffer[1] == ' ') {
      obj->num_vertex += 3;
    }
    if (buffer[0] == 'f' && buffer[1] == ' ') {
      obj->num_facets += 3;
    }
  }
  fclose(fp);
  return 0;
}

void free_obj(obj_file* obj) {
  free(obj->vertex_arr);
  free(obj->facets_arr);
}

int init_obj_struct(obj_file* obj) {
  obj->vertex_arr = (double*)calloc(obj->num_vertex, sizeof(double));
  if (obj->vertex_arr == NULL) return 1;
  obj->facets_arr = (int*)calloc(obj->num_facets, sizeof(int));
  if (obj->facets_arr == NULL) return 1;
  return 0;
}

int check_double_format(char* str) {
  int i = 0;
  while (str[i] != '\0') {
    if (isdigit(str[i]) == 0 && str[i] != '.' && str[i] != '-') return 1;
    ++i;
  }
  return 0;
}

int fill_arr(obj_file* obj, int* j, char* buffer, int checkflag) {
  int i = 2, counter = 0, countelement = 0;
  char digits[36];
  while (countelement < 3) {
    if (buffer[i] == ' ' || buffer[i + 1] == '\0') {
      if (counter != 0) {
        if (check_double_format(digits) == 1) {
          return 1;
        }
        switch (checkflag) {
          case 1:
            obj->vertex_arr[*j] = atof(digits);
            ++*j;
            counter = 0;
            break;
          case 2:
            obj->facets_arr[*j] = atoi(digits);
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

int parse_file(const char* filename, obj_file* obj) {
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

//int main() {
//  const char* str = "./obj/cube.obj";
//  obj_file obj;

//  parse_num_vertex_facets(str, &obj);
////  printf("%d----%d\n", obj.num_vertex, obj.num_facets);
//  int ff = init_obj_struct(&obj);
////  printf("%d\n", ff);
//  parse_file(str, &obj);
//  for(int i = 0; i < 24; i++) {
//  printf ("%f ", obj.vertex_arr[i]);
//  }
//  // for(int i = 0; i < obj.num_vertex)
////  printf("%lf  %lf  %lf\n", obj.vertex_arr[0], obj.vertex_arr[1],
////         obj.vertex_arr[2]);
////  printf("%lf  %lf  %lf\n", obj.vertex_arr[3], obj.vertex_arr[4],
////         obj.vertex_arr[5]);
////  printf("%d  %d  %d\n", obj.facets_arr[0], obj.facets_arr[1],
////         obj.facets_arr[2]);
////  printf("%d  %d  %d\n", obj.facets_arr[3], obj.facets_arr[4],
////         obj.facets_arr[5]);



//  return 0;
//}
