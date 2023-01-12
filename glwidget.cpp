#include "glwidget.h"
#include "qopengl.h"
#include "QDebug"
//#include <QOpenGLFunctions>

glwidget::glwidget(QWidget *parent)
    : QGLWidget(parent)
{
    qDebug() << "cube created";
}

glwidget::~glwidget()
{
    qDebug() << "cube destroyed";
}

void glwidget::initializeGL() {
//    glEnable(GL_DEPTH_TEST);
}

void glwidget::resize() {
//    glViewport(0,0,400,300);
}

void glwidget::paintGL() {
//    glClearColor(0,0.5,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    double vertex_ar[] = {-0.500000, -0.500000, 0.500000, 0.500000, -0.500000, 0.500000, -0.500000, 0.500000, 0.500000, 0.500000, 0.500000, 0.500000, -0.500000, 0.500000, -0.500000, 0.500000, 0.500000, -0.500000, -0.500000, -0.500000, -0.500000, 0.500000, -0.500000, -0.500000};
    int indexes_ar[] = {0,1,1,2,2,0, 2,1,1,3,3,2, 2,3,3,4,4,2, 4,3,3,5,5,4, 4,5,5,6,6,4, 6,5,5,7,7,6, 6,7,7,0,0,6, 0,7,7,1,1,0, 1,7,7,3,3,1, 3,7,7,5,5,3, 6,0,0,4,4,6, 4,0,0,2,2,4};
    glVertexPointer(3, GL_DOUBLE, 0, vertex_ar);
    glEnableClientState(GL_VERTEX_ARRAY);
    glDrawElements(GL_LINES, 72, GL_UNSIGNED_INT, indexes_ar);
//    glDrawArrays(GL_TRIANGLES, 0, 8);
}
