#ifndef SRC_S21_SMARTCALC_H_  // ???
#define SRC_S21_SMARTCALC_H_

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aff_transformation.h"

typedef struct obj_file {
  int num_vertex;  // количество координат вершин
  double* vertex_arr;  // массив координат вершин [x1,y1,z1,...,xn,yn,zn]
  int num_facets;   // количество полигонов
  int* facets_arr;  // массив индексов вершин [V1,...,Vn], объединяемыx в
                    // полигоны - все полигоны из 3 вершин
} obj_file;

int parse_num_vertex_facets(const char* filename, obj_file* obj);
int init_obj_struct(obj_file* obj);
void free_obj(obj_file* obj);
int parse_file(const char* filename, obj_file* obj);
int check_double_format(char* str);
int fill_arr(obj_file* obj, int* j, char* buffer, int checkflag);

#endif  // SRC_S21_SMARTCALC_H_
