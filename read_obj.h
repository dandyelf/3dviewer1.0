#ifndef READ_OBJ_H
#define READ_OBJ_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "obj.h"

int parse_num_vertex_facets(const char* filename, obj_file* obj);
int init_obj_struct(obj_file* obj);
void free_obj(obj_file* obj);
int parse_file(const char* filename, obj_file* obj);
int check_double_format(char* str);
int fill_arr(obj_file* obj, int* j, char* buffer, int checkflag);

#endif  // READ_OBJ_H
