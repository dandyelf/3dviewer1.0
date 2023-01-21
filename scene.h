#ifndef SCENE_H
#define SCENE_H

#define GL_SILENCE_DEPRECATION

#include <QByteArray>
#include <QOpenGLWidget>
#include <QWidget>

// extern "C" {
//     #include "read_obj.h"
// }

class scene : public QOpenGLWidget {
  Q_OBJECT

 public:
  scene(QWidget *parent = nullptr);
  ~scene();

  void set() { flag = 1; }
  void set_vertex_arr(double *v) { vertex_arr = v; }
  void set_facets_arr(int *f) { facets_arr = f; }
  void set_lines(int l) { lines = l; }

  double fon_r = 0.30, fon_g = 0.30, fon_b = 0.30;
  double line_r = 0.0, line_g = 0.0, line_b = 0.0;

  bool striple = false;

 private:



  float xRot, yRot, zRot;
  QPoint mPos;
  //    obj_file* obj = nullptr;
  double *vertex_arr = nullptr;
  int *facets_arr = nullptr;
  int flag = 0;
  int lines = 0;

  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;

  void keyPressEvent(QKeyEvent *) override;

  void draw();
};
#endif  // SCENE_H
