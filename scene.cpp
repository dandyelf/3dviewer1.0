#include "scene.h"
#include "QMouseEvent"
#include "QKeyEvent"
#include "QDebug"
#include <QtMath>

scene::scene(QWidget *parent)
    : QOpenGLWidget(parent)
{
    qDebug() << "scene created";

//    double vertex_ar[] = {-0.500000, -0.500000, 0.500000,
//                          0.500000, -0.500000, 0.500000,
//                          -0.500000, 0.500000, 0.500000,
//                          0.500000, 0.500000, 0.500000,
//                          -0.500000, 0.500000, -0.500000,
//                          0.500000, 0.500000, -0.500000,
//                          -0.500000, -0.500000, -0.500000,
//                          0.500000, -0.500000, -0.500000};
//    int indexes_ar[] = {0,1,1,2,2,0, 2,1,1,3,3,2, 2,3,3,4,4,2, 4,3,3,5,5,4,
//                        4,5,5,6,6,4, 6,5,5,7,7,6, 6,7,7,0,0,6, 0,7,7,1,1,0,
//                        1,7,7,3,3,1, 3,7,7,5,5,3, 6,0,0,4,4,6, 4,0,0,2,2,4};


}

scene::~scene()
{
    qDebug() << "scene destroyed";
}


void scene::initializeGL() {
    qDebug() << "initializeGL is working..";
//    glEnable(GL_DEPTH_TEST);  //  не понял пока зачем


}

void scene::resizeGL(int w, int h) {
    qDebug() << "resizeGL is working..";
    glViewport(0,0,w,h);  //  и без этого тоже работает, но ругается, что 'w' и 'h' не используются.
    glMatrixMode(GL_PROJECTION);  //  Выбор режима матрицы
    glLoadIdentity();  //  Загрузка единичной матрицы
    glFrustum(-1,1,-1,1,1,3);  //  Умножает текущую матрицу( единичную в данном случае) на матрицу перспективы
}

void scene::paintGL() {
//    glClear(GL_COLOR_BUFFER_BIT);  //  и без этого тоже работает
    qDebug() << "paintGL is working..";

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef(0, 0, -2);  //  Перевод матрицы. куда?
    glRotatef(xRot, 1, 0, 0);  // Повороты
    glRotatef(yRot, 0, 1, 0);

    draw();
}

void scene::mousePressEvent(QMouseEvent * e)
{
    mPos = e->pos();
    qDebug() << "mouse pressed";
}

void scene::mouseMoveEvent(QMouseEvent * e)
{
    xRot = 1 / M_PI * (e->pos().y() - mPos.y());
    yRot = 1 / M_PI * (e->pos().x() - mPos.x());
    qDebug() << "mouse moved";
    update();
}

void scene::keyPressEvent(QKeyEvent * e)
{
    switch(e->key()) {
    case(Qt::Key_Left):
        qDebug() << "Left pressed";
        break;
    case(Qt::Key_Right):
        qDebug() << "Rigth pressed";
        break;
    case(Qt::Key_Up):
        qDebug() << "Up pressed";
        break;
    case(Qt::Key_Down):
        qDebug() << "Down pressed";
        break;
    }
}

void scene::draw() {
    qDebug() << "draw is working..";




    if (flag) {
        qDebug() << "data recieved";
        glVertexPointer(3, GL_DOUBLE, 0, vertex_arr);  //  Определил массив вершин: 3 координаты на вершину типа Double без интервалов в массиве
        glEnableClientState(GL_VERTEX_ARRAY);  //  Включил массив вершин
        glDrawElements(GL_LINES, lines, GL_UNSIGNED_INT, facets_arr);  //  Работает в статическом варианте, рисует каркас куба.

        qDebug() << "Image was loaded.." << "lines is:" << lines;
    }

//    glDrawArrays(GL_TRIANGLES, 1, 12);  //  Данный вариант рисует закрашенные треугольники.
//    glEnableClientState(GL_INDEX_ARRAY);
}
