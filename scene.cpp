#include "scene.h"

#include <QtMath>
#include <iostream>

#include "QDebug"
#include "QKeyEvent"
#include "QMouseEvent"

scene::scene(QWidget *parent) : QOpenGLWidget(parent) {
  qDebug() << "scene created";
}

scene::~scene() { qDebug() << "scene destroyed"; }

void scene::initializeGL() {
  qDebug() << "initializeGL is working..";
  //    glEnable(GL_DEPTH_TEST);  //  не понял пока зачем
}

void scene::resizeGL(int w, int h) {
  qDebug() << "resizeGL is working..";
  glViewport(0, 0, w, h);  //  и без этого тоже работает, но ругается, что 'w' и
                           //  'h' не используются.
  glMatrixMode(GL_PROJECTION);  //  Выбор режима матрицы
  glLoadIdentity();  //  Загрузка единичной матрицы
  glFrustum(-1, 1, -1, 1, 1, 3);  //  Умножает текущую матрицу( единичную в
                                  //  данном случае) на матрицу перспективы
}

void scene::paintGL() {
  glClearColor(fon_r, fon_g, fon_b, 0.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  qDebug() << "paintGL is working..";

  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  glTranslatef(0, 0, -2);    //  Перевод матрицы. куда?.
  glRotatef(xRot, 1, 0, 0);  // Повороты
  glRotatef(yRot, 0, 1, 0);

  draw();
}

void scene::mousePressEvent(QMouseEvent *e) {
  mPos = e->pos();
  qDebug() << "mouse pressed";
}

void scene::mouseMoveEvent(QMouseEvent *e) {
  xRot = 1 / M_PI * (e->pos().y() - mPos.y());
  yRot = 1 / M_PI * (e->pos().x() - mPos.x());
  qDebug() << "mouse moved";
  update();
}

void scene::keyPressEvent(QKeyEvent *e) {
  switch (e->key()) {
    case (Qt::Key_Left):
      qDebug() << "Left pressed";
      break;
    case (Qt::Key_Right):
      qDebug() << "Rigth pressed";
      break;
    case (Qt::Key_Up):
      qDebug() << "Up pressed";
      break;
    case (Qt::Key_Down):
      qDebug() << "Down pressed";
      break;
  }
}

void scene::draw() {
  qDebug() << "draw is working..";

  if (flag) {

    qDebug() << "data recieved";
    glVertexPointer(
        3, GL_DOUBLE, 0,
        vertex_arr);  //  Определил массив вершин: 3 координаты на вершину типа
                      //  Double без интервалов в массиве
    glEnableClientState(GL_VERTEX_ARRAY);  //  Включил массив вершин
    glColor3f(line_r, line_g, line_b);
    if (striple) {
      glLineStipple(20, 0x3333);
      glEnable(GL_LINE_STIPPLE);
    } else {
        glEnable(GL_LINE_SMOOTH);

    }
    glDrawElements(
        GL_LINES, lines, GL_UNSIGNED_INT,
        facets_arr);  //  Работает в статическом варианте, рисует каркас куба.

    qDebug() << "Image was loaded.."
             << "lines is:" << lines;
  }

  //    glDrawArrays(GL_TRIANGLES, 1, 12);  //  Данный вариант рисует
  //    закрашенные треугольники. glEnableClientState(GL_INDEX_ARRAY);
}
