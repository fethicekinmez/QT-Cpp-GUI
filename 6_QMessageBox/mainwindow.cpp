#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>
#include <QDebug>

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

void MainWindow::on_btnAbout_clicked()
{
    QMessageBox::about(this, "About", "This is a testing message");
}


void MainWindow::on_btnAboutQt_clicked()
{
    QMessageBox::aboutQt(this, "About Qt");
}


void MainWindow::on_btnCritical_clicked()
{
    QMessageBox::critical(this,"Critical", "This is a testing message");

}


void MainWindow::on_btnInformation_clicked()
{
    QMessageBox::information(this,"Critical", "This is a testing message");
}


void MainWindow::on_btnQuestion_clicked()
{
     QMessageBox::question(this,"Critical", "This is a testing message");
}

void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::warning(this,"Critical", "This is a testing message");
}


void MainWindow::on_btnAsk_clicked()
{
   QMessageBox::StandardButton reply =  QMessageBox::question(this,"Critical", "Are you sure?", QMessageBox::Yes | QMessageBox::No);

    qInfo() << "Reply: " << reply;
}

