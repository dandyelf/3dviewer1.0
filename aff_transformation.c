#include "aff_transformation.h"

int scale(obj_file* obj, double koff) {
  int res = OK;
  if (koff != 0.0) {
    for (int i = 0; i < obj->num_vertex; i++) {
      obj->vertex_arr[i] *= koff;
    }
  } else {
    res = ERR_ZERO;
  }
  return res;
}

int scale_x(obj_file* obj, double koff) {
  int res = OK;
  if (koff != 0.0) {
    for (int i = 0; i < obj->num_vertex; i += 3) {
      obj->vertex_arr[i] *= koff;
    }
  } else {
    res = ERR_ZERO;
  }
  return res;
}

int scale_y(obj_file* obj, double koff) {
  int res = OK;
  if (koff != 0.0) {
    for (int i = 1; i < obj->num_vertex; i += 3) {
      obj->vertex_arr[i] *= koff;
    }
  } else {
    res = ERR_ZERO;
  }
  return res;
}

int scale_z(obj_file* obj, double koff) {
  int res = OK;
  if (koff != 0.0) {
    for (int i = 2; i < obj->num_vertex; i += 3) {
      obj->vertex_arr[i] *= koff;
    }
  } else {
    res = ERR_ZERO;
  }
  return res;
}

void move_x(obj_file* obj, double mv) {
  if (mv != 0.0) {
    for (int i = 0; i < obj->num_vertex; i += 3) {
      obj->vertex_arr[i] += mv;
    }
  }
}

void move_y(obj_file* obj, double mv) {
  if (mv != 0.0) {
    for (int i = 1; i < obj->num_vertex; i += 3) {
      obj->vertex_arr[i] += mv;
    }
  }
}

void move_z(obj_file* obj, double mv) {
  if (mv != 0.0) {
    for (int i = 2; i < obj->num_vertex; i += 3) {
      obj->vertex_arr[i] += mv;
    }
  }
}

void rotation_0x(obj_file* obj, double angle) {
  if (angle != 0.0) {
    for (int i = 0; i < obj->num_vertex; i += 3) {
      double temp_y = obj->vertex_arr[i + 1];
      double temp_z = obj->vertex_arr[i + 2];
      obj->vertex_arr[i + 1] = temp_y * cos(angle) + temp_z * sin(angle);
      obj->vertex_arr[i + 2] = -temp_y * sin(angle) + temp_z * cos(angle);
    }
  }
}

void rotation_0y(obj_file* obj, double angle) {
  if (angle != 0.0) {
    for (int i = 1; i < obj->num_vertex; i += 3) {
      double temp_x = obj->vertex_arr[i - 1];
      double temp_z = obj->vertex_arr[i + 1];
      obj->vertex_arr[i - 1] = temp_x * cos(angle) + temp_z * sin(angle);
      obj->vertex_arr[i + 1] = -temp_x * sin(angle) + temp_z * cos(angle);
    }
  }
}

void rotation_0z(obj_file* obj, double angle) {
  if (angle != 0.0) {
    for (int i = 2; i < obj->num_vertex; i += 3) {
      double temp_x = obj->vertex_arr[i - 2];
      double temp_y = obj->vertex_arr[i - 1];
      obj->vertex_arr[i - 2] = temp_x * cos(angle) - temp_y * sin(angle);
      obj->vertex_arr[i - 1] = -temp_x * sin(angle) + temp_y * cos(angle);
    }
  }
}
