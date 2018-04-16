#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point
{
    private :
        int x ;
        int y;

    public :
        Point(int , int);
        int getX ();
        int getY ();
        void setX (int);
        void setY (int);
 };

#endif // GEOMETRY_H_INCLUDED
