#include "read_obj.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
  obj_t obj;
  char* file = "obj/easyCube.obj";
  int err = readobj(file, &obj);
  if (err != -1) {
    for (int i = 0, k = 1; i < obj.count_of_vertexes; i++, k++) {
      printf("%lf ", obj.vertexes[i]);
      if (k % 3 == 0) printf("\n");
    }
    getchar();
    for (int i = 0, k = 1; i < err; i++, k++) {
      printf("%d ", obj.polygons[i]);
      if (k % 6 == 0) printf("\n");
    }
    free(obj.polygons);
    free(obj.vertexes);
    
  }
  //  Test
  char *test = "\n";
  return 0;
}