#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/Users/fthcknmz/Documents/QT C++ GUI/11_Displayi_Image_Using_Label/cpp-qt.png");
    qInfo() <<  pix.isNull();
    int width = ui->labelPicture->width();
    int height = ui->labelPicture->height();
    ui->labelPicture->setPixmap(pix.scaled(width,height,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}
