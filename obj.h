#ifndef OBJ_H
#define OBJ_H

typedef struct obj_file {
    int num_vertex;
    double* vertex_arr;
    int num_facets;
    int* facets_arr;
} obj_file;

#endif  // OBJ_H

