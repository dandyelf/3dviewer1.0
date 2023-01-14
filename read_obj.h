
#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct obj_file {
  int num_vertex;
  double* vertex_arr;
  int num_facets;
  int* facets_arr;
} obj_file;

int parse_num_vertex_facets(const char* filename, obj_file* obj);
int init_obj_struct(obj_file* obj);
void free_obj(obj_file* obj);
int parse_file(const char* filename, obj_file* obj);
int check_double_format(char* str);
int fill_arr(obj_file* obj, int* j, char* buffer, int checkflag);

#endif  // SRC_S21_SMARTCALC_H_
