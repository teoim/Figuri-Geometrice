#include <iostream>
#include "figura.h"
#include "punct.h"
using namespace std;

punct::punct()
{
    setX(0.0);
    setY(0.0);
}

punct::punct(const punct& p)
{
//    cout << "Constructor de copiere punct." << endl;

//initializare membrii (prin copiere):
    this->setX(p.coordX);
    this->setY(p.coordY);
}

punct::punct(double vX, double vY)
{
    setX(vX);
    setY(vY);
}

punct::~punct()
{
//    cout << "Destructor punct\n" << endl;
}

void punct::setX(double vX)
{
    coordX = vX;
}

void punct::setY(double vY)
{
    coordY = vY;
}

//OPERATORII ++ SI -- VOR INCREMENTA CU O UNITATE VALOAREA FIECAREI COORDONATE:
punct punct::operator++()  //PREFIX
{
    coordX++;
    coordY++;
    return *this;
}

punct punct::operator++(int a)  //SUFIX
{
    coordX++;
    coordY++;
    return *this;
}

punct punct::operator--()  //PREFIX
{
    coordX--;
    coordY--;
    return *this;
}

punct punct::operator--(int a)  //SUFIX
{
    coordX--;
    coordY--;
    return *this;
}

int punct::operator==(punct & p1)
{
 //   cout << "operator== , punct" << endl;
    return (getX() == p1.getX()) && (getY() == p1.getY());
}

int punct::operator<(punct & p1)
{
  //  cout << "operator< , punct" << endl;
    return (getX() < p1.getX()) && (getY() < p1.getY());
}

int punct::operator>(punct & p1)
{
//    cout << "operator> , punct" << endl;
    return (getX() > p1.getX()) && (getY() > p1.getY());
}
