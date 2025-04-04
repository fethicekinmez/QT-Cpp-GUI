#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "dialog.h"

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

void MainWindow::on_pushButton_clicked()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}


void MainWindow::on_pushButton_2_clicked()
{

    dialog2 = new Dialog(this);
    dialog2->show();

}

