#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include"ui_mymainwindow.h"
namespace Ui {
class MyMainWindow;
}

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMainWindow(QWidget *parent = 0);
    ~MyMainWindow();

private slots:


    void on_actionBack_triggered();

    void on_guidebutton_clicked();

    void on_visitorbutton_clicked();

    void on_actionExit_triggered();

    void on_leftbutton_clicked();

    void on_rightbutton_clicked();

    void on_aheadbutton_clicked();

private:
    Ui::MyMainWindow *ui;
};

#endif // MYMAINWINDOW_H
