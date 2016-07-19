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



    void on_action_AddorReduce_triggered();

    void on_actionGukejiezhang_triggered();

    void on_actionBenrijiesuan_triggered();

    void on_actionZhuceyuangong_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_7_triggered();

private:
    Ui::MainWindow *ui;

    bool pass=false;
};

#endif // MAINWINDOW_H
