#include <iostream>
using namespace std;
#ifndef GEOMETRY_H
#define GEOMETRY_H

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
        friend std::ostream& operator<< (std::ostream& , const Point& );
 };

#endif // GEOMETRY_H_INCLUDED
