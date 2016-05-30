#include <iostream>
#include "figura.h"
#include "punct.h"
using namespace std;

punct::punct()
{
    setX(0.0);
    setY(0.0);
}

punct::punct(double vX, double vY)
{
    setX(vX);
    setY(vY);
}

void punct::setX(double vX)
{
    coordX = vX;
}

void punct::setY(double vY)
{
    coordY = vY;
}

void punct::operator+(double v[2])
{
    setX( getX() + v[0] );
    setY( getY() + v[1] );
}

int punct::operator==(punct & p1)
{
    cout << "operator== din punct" << endl;
    return (getX() == p1.getX()) && (getY() == p1.getY());
}

int punct::operator<(punct & p1)
{
    cout << "operator< din punct" << endl;
    return (getX() < p1.getX()) && (getY() < p1.getY());
}

int punct::operator>(punct & p1)
{
    cout << "operator> din punct" << endl;
    return (getX() > p1.getX()) && (getY() > p1.getY());
}
