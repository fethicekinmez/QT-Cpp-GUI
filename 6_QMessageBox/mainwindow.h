#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAbout_clicked();

    void on_btnAboutQt_clicked();

    void on_btnCritical_clicked();

    void on_btnInformation_clicked();

    void on_btnQuestion_clicked();

    void on_pushButton_6_clicked();

    void on_btnAsk_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
