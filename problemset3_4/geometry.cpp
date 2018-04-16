#include "geometry.h"

Point::Point( int u , int v){
    x=u;
    y=v;
}

int Point::getX () {
    return x;
}

int Point::getY () {
    return y;
}

void Point::setX (int newX) {
    x = newX;
}

void Point::setY (int newY) {
    y = newY;
}
