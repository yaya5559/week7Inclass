//
// Created by yahya on 5/12/2024.
//

#ifndef WEEK7_POINT_H
#define WEEK7_POINT_H
#include "point.h"
#include "string"
#include <sstream>
#include <cmath>
using namespace std;

class Point {


private:
    double _x;
    double _y;
    double _z;


public:
    Point(): _x(0), _y(0), _z(0){};
    Point(double x, double y, double z);
    double GetX() const;
    double GetY() const;
    double GetZ() const;
    void SetX(int x);
    void SetY(int y);
    void SetZ(int z);
    string ToString() const;



};


#endif //WEEK7_POINT_H
