#include "scene.h"

#include <QDebug>
#include <QtMath>

#include "QMouseEvent"

scene::scene(QWidget* parent) : QOpenGLWidget(parent) {
  fon_r_ = 0.30, fon_g_ = 0.30, fon_b_ = 0.30;
  perspective = true;
  stipple = false;
  points = true;
}

void scene::initializeGL() { glEnable(GL_DEPTH_TEST); }

void scene::resizeGL(int w, int h) { glViewport(0, 0, w, h); }

void scene::paintGL() {
  glClearColor(fon_r_, fon_g_, fon_b_, 0.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  if (perspective)
    glFrustum(-1, 1, -1, 1, 1 / (2 * tan((60.0 * M_PI / 180) / 2)), 6);
  else
    glOrtho(-1, 1, -1, 1, 1, 3);

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glTranslatef(0, 0, -2);
  glRotatef(xRot_, 1, 0, 0);
  glRotatef(yRot_, 0, 1, 0);

  draw();
}

void scene::set_ortho() {
  perspective = false;
  update();
}
void scene::set_persp() {
  perspective = true;
  update();
}
void scene::set() { data_loaded_ = 1; }
void scene::set_vertex_arr(double* arr) { vertex_arr_ = arr; }
void scene::set_facets_arr(int* arr) { facets_arr_ = arr; }
void scene::set_lines(int lines) { lines_ = lines; }
void scene::mousePressEvent(QMouseEvent* e) { mPos_ = e->pos(); }

void scene::mouseMoveEvent(QMouseEvent* e) {
  xRot_ = 1 / M_PI * (e->pos().y() - mPos_.y());
  yRot_ = 1 / M_PI * (e->pos().x() - mPos_.x());
  update();
}

void scene::draw() {
  if (data_loaded_) {
    glVertexPointer(3, GL_DOUBLE, 0, vertex_arr_);
    glEnableClientState(GL_VERTEX_ARRAY);
    glColor3f(line_r_, line_g_, line_b_);
    if (stipple) {
      glLineStipple(20, 0x3333);
      glEnable(GL_LINE_STIPPLE);
    } else {
      glDisable(GL_LINE_STIPPLE);
    }
    glLineWidth(line_width);
    glDrawElements(GL_LINES, lines_, GL_UNSIGNED_INT, facets_arr_);
    glPointSize(dot_width);
    glColor3f(dot_r_, dot_g_, dot_b_);
    if (points) {
      if (smooth) {
        glEnable(GL_POINT_SMOOTH);
      }
      glDrawElements(GL_POINTS, lines_, GL_UNSIGNED_INT, facets_arr_);
    }
    glDisableClientState(GL_VERTEX_ARRAY);
    if (stipple) glDisable(GL_LINE_STIPPLE);
    if (smooth) glDisable(GL_POINT_SMOOTH);
  }

  //    glDrawArrays(GL_TRIANGLES, 1, 12);  //  Данный вариант рисует
  //    закрашенные треугольники. glEnableClientState(GL_INDEX_ARRAY);
}
