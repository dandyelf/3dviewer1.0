#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_openFoldefButton_clicked()
{
    QString selfilter = tr("OBJ (*.obj)");
    QString Filepath = QFileDialog::getOpenFileName(this, "Open File", "/home/", tr("OBJ (*.obj);; All files (*.*)"), &selfilter);
    ui->PathLine->setText(Filepath);
    QByteArray ba = (ui->PathLine->text()).toLocal8Bit();
    const char *c_str2 = ba.data(); //  Преобразование в str* для СИ
    int validfunc = file_work(c_str2);
}
