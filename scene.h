#ifndef SCENE_H
#define SCENE_H

#define GL_SILENCE_DEPRECATION

#include <QWidget>
#include <QOpenGLWidget>
#include <QByteArray>

extern "C" {
    #include "obj.h"
}

class scene : public QOpenGLWidget
{
    Q_OBJECT

public:
    scene(QWidget *parent = nullptr);
    ~scene();

    obj_file obj;

//    static QByteArray *parseDataBin(QByteArray* data);
//    void set_obj(obj_file* other)  {
//        obj = other;
//    }

private:
    float xRot, yRot, zRot;
    QPoint mPos;

    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void mousePressEvent(QMouseEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;

    void keyPressEvent(QKeyEvent*) override;

    void draw();
};
#endif // SCENE_H
