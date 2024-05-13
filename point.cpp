//
// Created by yahya on 5/12/2024.
//


#include "point.h"

void Point::SetY(int y){_y =y;}
double Point::GetZ() const {return _z;}
void Point::SetX(int x){_x =x;}
double Point::GetX() const {return _x;}
void Point::SetZ(int z){_z =z;}
double Point::GetY() const {return _y;}
string Point::ToString() const {
    stringstream ss;
    ss<<"X: "<<_x<<", Y: "<<_y<<", Z: "<<_z;
    return ss.str();
}


Point::Point(double x, double y, double z){
    _x=x;
    _z=z;
    _y=y;

}
