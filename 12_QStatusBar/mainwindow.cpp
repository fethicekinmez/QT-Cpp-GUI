#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->addPermanentWidget(ui->progressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked(){

    ui->statusbar->showMessage("Hello, look here!!!");

}


void MainWindow::on_pushButton_2_clicked()
{
    ui->statusbar->showMessage("This message will destroy itself in 5sec", 5000);
}

