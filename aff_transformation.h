#ifndef SRC_AFF_TRANSFORMATION_H_
#define SRC_AFF_TRANSFORMATION_H_

#include "read_obj.h"

typedef enum RESULT {
  OK,
  ERR_ZERO,  // масштаб с коэффициентом 0
} RESULT;

int scale(obj_file* obj, double koff);
int scale_x(obj_file* obj, double koff);
int scale_y(obj_file* obj, double koff);
int scale_z(obj_file* obj, double koff);
void move_x(obj_file* obj, double mv);
void move_y(obj_file* obj, double mv);
void move_z(obj_file* obj, double mv);
void rotation_0x(obj_file* obj, double angle);
void rotation_0y(obj_file* obj, double angle);
void rotation_0z(obj_file* obj, double angle);

#endif  // SRC_AFF_TRANSFORMATION_H_