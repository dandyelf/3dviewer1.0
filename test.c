// #include "read_obj.h"
#include "s21_viewer.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
  int arr[3] = {1, 7, 5};
  int res[6] = {0, 0, 0, 0, 0, 0};
  obj_t obj;
  int countf = 0;

  change_facets(&obj, arr, &countf, 3);

  printf("[[%d]]", countf);

  for (int i = 0, k = 1; i < 6; i++, k++) {
    printf("%d ", obj.polygons[i]);
    if (k % 6 == 0) printf("\n");
  }

  // int first = 85;
  // for (int i = 0, j = 0; i < 3; i++, j += 2) {
  //   //  first = arr[0];
  //   if (i == 2) {
  //     res[j] = arr[i];
  //     res[j + 1] = 55;
  //     break;
  //   }
  //   // if (i == 0) {
  //   //   res[j] = arr[i];
  //   //   res[j + 1] = arr[i + 1];
  //   // } else {
  //   res[j] = arr[i];
  //   res[j + 1] = arr[i + 1];
  //   //  }
  // }

  //     for (int i = 0; i < 6; i++) {
  //   printf("%d ", res[i]);
  // }

  // obj_t obj;
  // char* file = "obj/easyCube.obj";
  // int err = readobj(file, &obj);
  // if (err != -1) {
  //   for (int i = 0, k = 1; i < obj.count_of_vertexes; i++, k++) {
  //     printf("%lf ", obj.vertexes[i]);
  //     if (k % 3 == 0) printf("\n");
  //   }
  //   getchar();
  //   for (int i = 0, k = 1; i < err; i++, k++) {
  //     printf("%d ", obj.polygons[i]);
  //     if (k % 6 == 0) printf("\n");
  //   }
  //   free(obj.polygons);
  //   free(obj.vertexes);

  // }
  // //  Test
  // char *test = "\n";
  return 0;
}