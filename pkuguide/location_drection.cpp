#include "location_drection.h"

Location_drection::Location_drection(int a,int b,int c, int d,QObject *parent) : QObject(parent)
{
        x=a;
        y=b;
        dx=c;
        dy=d;

}
Location_drection::Location_drection(const Location_drection& s):QObject()
{
    this->x=s.x;
    this->y=s.y;
    this->dx=s.dx;
    this->dy=s.dy;

}
bool Location_drection::operator<(const Location_drection& aa)const
{
    if(this->x<aa.x)
        return true;
    else if(this->x==aa.x)
    {
        if(this->y<aa.y)
            return true;
        else if(this->y==aa.y)
        {
            if(this->dx<aa.dx)
                return true;
            else if(this->dx==aa.dx)
            {
                if(this->dy<aa.dy)
                    return true;
                else return false;
            }
            else return false;
        }
        else return false;
    }
    else return false;
}
