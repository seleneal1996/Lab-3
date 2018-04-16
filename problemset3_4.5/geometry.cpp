#include "geometry.h"

PointArray::PointArray()
{
    size=0;
    points=new Point[0];
}

//Agregue un punto al final del arreglo

void PointArray::push_back(const Point  &p)
{
    resize(size+1);
    points[size-1]=p;
}
/*Inserte un punto en una posición arbitraria
(subíndice) de la matriz, cambiando la posición
pasada de los elementos a la derecha*/
void PointArray::insert(const int position,const Point &p)
{
    resize(size+1);
    for(int i=size-1;i>position;i--)
    {
        points[i]=points[i-1];
    }
    points[position]=p;
}
/*Remover el punto en una posición arbitraria (subíndice) de
la matriz, desplazando los elementos restantes a la izquierda*/
void PointArray::remove(const int position)
{
    if(position>=0 && position<size)
    {
        for(int i=position;i<size-2;i++)
        {
            points[i]=points[i+1];
        }
        resize(size-1);
    }
}

//OBTENER EL TAMAÑO DE LA MATRIZ
//const int PointArray::getSize() const

//ELIMINA TODO DEL CONJUNTO Y ESTABLECE SU TAMAÑO EN 0

void PointArray::clear()
{
    resize(0);
}
/*Obtenga un punto para el elemento en una posicion arbitraria en la matriz,
donde las posiciones comienzan en 0 como con las arrays*/

Point *PointArray::get(const int position)
{
    if(position>=0 && position<size)
    {
        return points+position;
    }
    else
    {
        return NULL;
    }
}
const Point *PointArray::get(const int position) const
{
    if(position>=0 && position<size)
    {
        return points+position;
    }
    else
    {
        return NULL;
    }
}
