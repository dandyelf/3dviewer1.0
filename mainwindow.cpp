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
    QString Filepath = QFileDialog::getOpenFileName(this, "Get Any File");
        ui->PathLine->setText(Filepath);

}

