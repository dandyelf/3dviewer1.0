#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int count_of_vertexes;
  double* vertexes;
  int count_of_facets;
  int* polygons;
  int facet_elem;
} obj_t;

int parse_num_vertex_facets(const char* filename, obj_t* obj);
int init_obj_struct(obj_t* obj);
void free_obj(obj_t* obj);
int parse_file(const char* filename, obj_t* obj);
int check_facet_format(char* str);
int StartPars(const char* filename, obj_t* obj);
void count_facets(char* buffer, obj_t* obj);


#endif  // SRC_S21_SMARTCALC_H_
