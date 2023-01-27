#ifndef SCENE_H
#define SCENE_H

#define GL_SILENCE_DEPRECATION

#include <QByteArray>
#include <QOpenGLWidget>
#include <QWidget>

class scene : public QOpenGLWidget {
  Q_OBJECT

 public:
  scene(QWidget *parent = nullptr);
  ~scene();

  void set() { data_loaded = 1; }
  void set_ortho() {
    ortho = 1;
    perspective = 0;
    update();
  }
  void set_persp() {
    ortho = 0;
    perspective = 1;
    update();
  }
  void set_vertex_arr(double *v) { vertex_arr = v; }
  void set_facets_arr(int *f) { facets_arr = f; }
  void set_lines(int l) { lines = l; }

  double fon_r = 0.30, fon_g = 0.30, fon_b = 0.30;
  double line_r = 0.0, line_g = 0.0, line_b = 0.0;
  double dot_r = 0.0, dot_g = 0.0, dot_b = 0.0;

  bool stipple = false;
  double line_width = 1.0;
  double dot_width = 1.0;

 private:
  float xRot = 0.0, yRot = 0.0, zRot = 0.0;
  QPoint mPos;

  double *vertex_arr = nullptr;
  int *facets_arr = nullptr;

  int data_loaded;
  int perspective = 1;
  int ortho = 0;

  int lines = 0;

  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;

  void draw();
};
#endif  // SCENE_H
