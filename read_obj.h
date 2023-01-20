#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#ifndef READ_OBJ_H
#define READ_OBJ_H

typedef struct obj {
  int count_of_vertexes;
  int count_of_facets;
  double* vertexes;
  int* polygons;
} obj_t;

int readobj(char* file_name, obj_t*);

#endif

#endif  // READ_OBJ_H
