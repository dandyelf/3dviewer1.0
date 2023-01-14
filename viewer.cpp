#include "viewer.h"
#include "ui_viewer.h"
#include "scene.h"

viewer::viewer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::viewer)
{
    ui->setupUi(this);
}

viewer::~viewer()
{
    delete ui;
}

