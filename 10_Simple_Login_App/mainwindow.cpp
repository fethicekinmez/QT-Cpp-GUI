#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete welcomeWindow;
}

void MainWindow::on_btnLogin_clicked(){
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    if(username == "test" && password == "test"){
        QMessageBox::information(this, "Login", "The username and password are correct");
        welcomeWindow = new WelcomeWindow(this);
        hide();
        welcomeWindow->show();
    }
    else{
        QMessageBox::warning(this, "Error", "Username and password are incorrect");
    }
}

