#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logindialog.h"
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_Login_triggered();

    void on_action_Quit_triggered();

    void on_action_Start_triggered();

private:
    Ui::MainWindow *ui;
    LoginDialog *login;

    bool pass=false;
};

#endif // MAINWINDOW_H
