#ifndef SCENE_H
#define SCENE_H

#define GL_SILENCE_DEPRECATION

#include <QByteArray>
#include <QOpenGLWidget>

class scene : public QOpenGLWidget {
  Q_OBJECT
 public:
  scene(QWidget *parent = nullptr);

  void set();
  void set_ortho();
  void set_persp();

  void set_vertex_arr(double *);
  void set_facets_arr(int *);
  void set_lines(int);

  double fon_r_{}, fon_g_{}, fon_b_{};
  double line_r_{}, line_g_{}, line_b_{};
  double dot_r_{}, dot_g_{}, dot_b_{};

  bool stipple, points, smooth, perspective;
  double line_width;
  double dot_width;

 private:
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

  int data_loaded_{};
  int lines_{};

  float xRot_{}, yRot_{}, zRot_{};
  QPoint mPos_{};

  double *vertex_arr_ = nullptr;
  int *facets_arr_ = nullptr;

  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;

  void draw();
};

#endif  // SCENE_H
