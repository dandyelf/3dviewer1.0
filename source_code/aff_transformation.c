#include "aff_transformation.h"

int scale(obj_t *obj, double koff) {
  int res = OK;
  if (koff != 0.0) {
    for (int i = 0; i < obj->count_of_vertexes * 3; i++) {
      obj->vertexes[i] *= koff;
    }
  } else {
    res = ERR_ZERO;
  }
  return res;
}

int scale_x(obj_t *obj, double koff) {
  int res = OK;
  if (koff != 0.0) {
    for (int i = 0; i < obj->count_of_vertexes * 3; i += 3) {
      obj->vertexes[i] *= koff;
    }
  } else {
    res = ERR_ZERO;
  }
  return res;
}

int scale_y(obj_t *obj, double koff) {
  int res = OK;
  if (koff != 0.0) {
    for (int i = 1; i < obj->count_of_vertexes * 3; i += 3) {
      obj->vertexes[i] *= koff;
    }
  } else {
    res = ERR_ZERO;
  }
  return res;
}

int scale_z(obj_t *obj, double koff) {
  int res = OK;
  if (koff != 0.0) {
    for (int i = 2; i < obj->count_of_vertexes * 3; i += 3) {
      obj->vertexes[i] *= koff;
    }
  } else {
    res = ERR_ZERO;
  }
  return res;
}

void move_x(obj_t *obj, double mv) {
  if (mv != 0.0) {
    for (int i = 0; i < obj->count_of_vertexes * 3; i += 3) {
      obj->vertexes[i] += mv;
    }
  }
}

void move_y(obj_t *obj, double mv) {
  if (mv != 0.0) {
    for (int i = 1; i < obj->count_of_vertexes * 3; i += 3) {
      obj->vertexes[i] += mv;
    }
  }
}

void move_z(obj_t *obj, double mv) {
  if (mv != 0.0) {
    for (int i = 2; i < obj->count_of_vertexes * 3; i += 3) {
      obj->vertexes[i] += mv;
    }
  }
}

// void shift_dot(obj_t* obj, dot_t dot) {
//   for (int i = 0; i < obj->count_of_vertexes * 3; i += 3) {
//     obj->vertexes[i] += dot.delta_x;
//     obj->vertexes[i + 1] += dot.delta_y;
//     obj->vertexes[i + 2] += dot.delta_z;
//   }
// }

void turn_x(obj_t *obj, double angle) {
  if (angle != 0.0) {
    angle *= RAD_TO_GRAD;
    for (int i = 0; i < obj->count_of_vertexes * 3; i += 3) {
      double temp_y = obj->vertexes[i + 1];
      double temp_z = obj->vertexes[i + 2];
      obj->vertexes[i + 1] = temp_y * cos(angle) + temp_z * sin(angle);
      obj->vertexes[i + 2] = -temp_y * sin(angle) + temp_z * cos(angle);
    }
  }
}

void turn_y(obj_t *obj, double angle) {
  if (angle != 0.0) {
    angle *= -RAD_TO_GRAD;
    for (int i = 0; i < obj->count_of_vertexes * 3; i += 3) {
      double temp_x = obj->vertexes[i];
      double temp_z = obj->vertexes[i + 2];
      obj->vertexes[i] = temp_x * cos(angle) + temp_z * sin(angle);
      obj->vertexes[i + 2] = -temp_x * sin(angle) + temp_z * cos(angle);
    }
  }
}

void turn_z(obj_t *obj, double angle) {
  if (angle != 0.0) {
    angle *= RAD_TO_GRAD;
    for (int i = 0; i < obj->count_of_vertexes * 3; i += 3) {
      double temp_x = obj->vertexes[i];
      double temp_y = obj->vertexes[i + 1];
      obj->vertexes[i] = temp_x * cos(angle) + temp_y * sin(angle);
      obj->vertexes[i + 1] = -temp_x * sin(angle) + temp_y * cos(angle);
    }
  }
}
