#ifndef SRC_AFF_TRANSFORMATION_H_
#define SRC_AFF_TRANSFORMATION_H_

#include "math.h"
#include "s21_viewer.h"

#define RAD_TO_GRAD 0.01745329251994

typedef enum RESULT {
  OK,
  ERR_ZERO,  // масштаб с коэффициентом 0
} RESULT;

// typedef struct dot {
//  double delta_x;
//  double delta_y;
//  double delta_z;
//} dot_t;

int scale(obj_t* obj, double koff);
int scale_x(obj_t* obj, double koff);
int scale_y(obj_t* obj, double koff);
int scale_z(obj_t* obj, double koff);
void move_x(obj_t* obj, double mv);
void move_y(obj_t* obj, double mv);
void move_z(obj_t* obj, double mv);
void turn_x(obj_t* obj, double angle);
void turn_y(obj_t* obj, double angle);
void turn_z(obj_t* obj, double angle);

// void shift_dot(obj_t* obj, dot_t dot);

#endif  // SRC_AFF_TRANSFORMATION_H_
