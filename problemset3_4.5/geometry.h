//#ifndef POINT_H
#define POINT_H
#ifndef POINTARRAY_H
#define POINTARRAY_H
#include <iostream>
#include "geometry.h"
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
class PointArray
{
    int size;
    Point *points;

    void resize(int size);

public:

    PointArray();
    PointArray(const Point pts[],const int size);
    PointArray(const PointArray &pv);
    ~PointArray();

    void clear();
    int getSize() const
    {
        return size;
    }
    void push_back(const Point &p);
    void insert(const int position,const Point &p);
    void remove(const int position);
    Point *get(const int position);
    const Point *get(const int position) const;
};

#endif // GEOMETRY_H_INCLUDED

