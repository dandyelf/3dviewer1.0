#include "read_obj.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
  obj_t obj;
  char* file = "obj/cat.obj";
  int err = readobj(file, &obj);
  if (err != -1) {
    for (int i = 0, k = 1; i < err; i++, k++) {
      printf("%d ", obj.polygons[i]);
      if (k % 6 == 0) printf("\n");
    }
    free(obj.polygons);
    free(obj.vertexes);
    
  }
  char *test = "\n";
  if(!strpbrk(test, "0123456789")) printf("No digits\n");
  return 0;
}