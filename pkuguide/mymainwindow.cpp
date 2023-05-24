#include "mymainwindow.h"
#include "ui_mymainwindow.h"
#include"location_drection.h"
#include<QMovie>
#include<QDebug>
extern Location_drection nowlocation_direction;
extern QMap<Location_drection,int> map;
MyMainWindow::MyMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->startpageimg->lower();
    ui->guidepageimg->lower();
    //ui->toolButton->setWindowFlags(Qt::WindowStaysOnTopHint);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::on_actionBack_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MyMainWindow::on_guidebutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MyMainWindow::on_visitorbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MyMainWindow::on_actionExit_triggered()
{
    this->close();
}

void MyMainWindow::on_leftbutton_clicked()
{

    int xx,yy;
    xx=-nowlocation_direction.dy;
    yy=nowlocation_direction.dx;
    qDebug()<<nowlocation_direction.dx<<nowlocation_direction.dy<<"rrrrr"<<xx<<yy;
    nowlocation_direction.dx=xx;
    nowlocation_direction.dy=yy;
    ui->visitorview->setCurrentIndex(map[nowlocation_direction]);
}

void MyMainWindow::on_rightbutton_clicked()
{
    int xx,yy;
    xx=nowlocation_direction.dy;
    yy=-nowlocation_direction.dx;
    qDebug()<<nowlocation_direction.dx<<nowlocation_direction.dy<<"rrrrr"<<xx<<yy;
    nowlocation_direction.dx=xx;
    nowlocation_direction.dy=yy;
    ui->visitorview->setCurrentIndex(map[nowlocation_direction]);
}

void MyMainWindow::on_aheadbutton_clicked()
{
    nowlocation_direction.x+= nowlocation_direction.dx;
    nowlocation_direction.y+= nowlocation_direction.dy;
     ui->visitorview->setCurrentIndex(map[nowlocation_direction]);
}
