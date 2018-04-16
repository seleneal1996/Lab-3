#ifndef POINTARRAY_H
#define POINTARRAY_H

#include <iostream>
#include "geometry.h"
using namespace std;

class PointArray
{
    public :
        PointArray();
        PointArray(const Point points[],const int size);
        PointArray(const PointArray &pv);
        int getX ();
        int getY ();
        void setX (int);
        void setY (int);
        ~PointArray();
 };

#endif // GEOMETRY_H_INCLUDED

