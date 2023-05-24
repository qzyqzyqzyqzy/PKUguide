#ifndef LOCATION_DRECTION_H
#define LOCATION_DRECTION_H

#include <QObject>

class Location_drection : public QObject
{
    Q_OBJECT
public:
    int x;
    int y;//x y的坐标信息
    int dx;
    int dy;//角度信息（01）（10）（0-1）（-10）四种
    explicit Location_drection(int a,int b,int c,int d,QObject *parent = 0);
    Location_drection(const Location_drection& s);


    bool operator<(const Location_drection& aa)const;




signals:

public slots:
    //void turn();//转向的槽函数，需要接受按钮传来的转向矩阵
};

#endif // LOCATION_DRECTION_H
