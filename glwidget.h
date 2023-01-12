#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QtOpenGL>
#include <QOpenGLWidget>
#include <QOpenGLWindow>
#include <QSurfaceFormat>
#include <QOpenGLFunctions>
#include <GL/glu.h>

class glwidget : public QGLWidget
{
    Q_OBJECT

public:
    glwidget(QWidget *parent = nullptr);
    ~glwidget();

    void initializeGL();
    void resize();
    void paintGL();
private:
//    double vertex_ar[24];
};
#endif // GLWIDGET_H
