#include "mymainwindow.h"
#include"location_drection.h"
#include <QApplication>
#include<QMap>
Location_drection nowlocation_direction(0,0,0,1);//定义一个现在位置方向状态的对象，不需要父对象
QMap<Location_drection,int> map;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    map.insert(Location_drection(0,0,1,0),1);
    map.insert(Location_drection(0,0,-1,0),2);
    map.insert(Location_drection(0,1,0,1),3);
    MyMainWindow w;
    w.show();

    return a.exec();
}
