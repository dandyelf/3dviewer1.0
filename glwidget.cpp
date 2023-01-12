#include "glwidget.h"
#include "QMouseEvent"
#include "QDebug"
#include <QtMath>

glwidget::glwidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
    qDebug() << "cube created";
//    setGeometry(1500,500,600,600);  //  видимо без этого на усмотрение системы рисует позицию и размер окна
}

glwidget::~glwidget()
{
    qDebug() << "cube destroyed";
}

void glwidget::initializeGL() {
    glEnable(GL_DEPTH_TEST);  //  не понял пока зачем
}

void glwidget::resizeGL(int w, int h) {
    glViewport(0,0,w,h);  //  и без этого тоже работает, но ругается, что 'w' и 'h' не используются.
    glMatrixMode(GL_PROJECTION);  //  Выбор режима матрицы
    glLoadIdentity();  //  Загрузка единичной матрицы
    glFrustum(-1,1,-1,1,1,3);  //  Умножает текущую матрицу( единичную в данном случае) на матрицу перспективы
}

void glwidget::paintGL() {
//    glClear(GL_COLOR_BUFFER_BIT);  //  и без этого тоже работает

    double vertex_ar[] = {-0.500000, -0.500000, 0.500000,
                          0.500000, -0.500000, 0.500000,
                          -0.500000, 0.500000, 0.500000,
                          0.500000, 0.500000, 0.500000,
                          -0.500000, 0.500000, -0.500000,
                          0.500000, 0.500000, -0.500000,
                          -0.500000, -0.500000, -0.500000,
                          0.500000, -0.500000, -0.500000};
    int indexes_ar[] = {0,1,1,2,2,0, 2,1,1,3,3,2, 2,3,3,4,4,2, 4,3,3,5,5,4,
                        4,5,5,6,6,4, 6,5,5,7,7,6, 6,7,7,0,0,6, 0,7,7,1,1,0,
                        1,7,7,3,3,1, 3,7,7,5,5,3, 6,0,0,4,4,6, 4,0,0,2,2,4};


    glVertexPointer(3, GL_DOUBLE, 0, vertex_ar);  //  Определил массив вершин: 3 координаты на вершину типа Double без интервалов в массиве
    glEnableClientState(GL_VERTEX_ARRAY);  //  Включил массив вершин
    glDrawElements(GL_LINES, 72, GL_UNSIGNED_INT, indexes_ar);  //  Работает в статическом варианте, рисует каркас куба.
//        glDrawArrays(GL_TRIANGLES, 1, 12);  //  Данный вариант рисует закрашенные треугольники.
//    glEnableClientState(GL_INDEX_ARRAY);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glTranslatef(0, 0, -2);
    glRotatef(xRot, 1, 0, 0);
    glRotatef(yRot, 0, 1, 0);

    draw();
}

void glwidget::mousePressEvent(QMouseEvent * e)
{
    mPos = e->pos();
    qDebug() << "left mouse button pressed";
}

void glwidget::mouseMoveEvent(QMouseEvent * e)
{
    xRot = 1 / M_PI * (e->pos().y() - mPos.y());
    yRot = 1 / M_PI * (e->pos().x() - mPos.x());
    qDebug() << "mouse move";
    update();
}

void glwidget::draw() {

}
