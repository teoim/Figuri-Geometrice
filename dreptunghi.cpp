#include <iostream>
#include "figura.h"
#include "punct.h"
#include "segmOr.h"
#include "segmVe.h"
#include "dreptunghi.h"


dreptunghi::dreptunghi() //DEFAULT: vom crea dreptunghiul de coordonate stanga-sus: (0,0), lungime 2 si latime 1
{
    p = new punct(0.0, 0.0);
    sv = new segmVe(0.0, 0.0, 2.0);
    so = new segmOr(0.0, 1.0, 0.0);
    setArea();
}


// Parametrii: coordonatele x si y ale punctului din dreapta-sus; lungimile segmentelor: orizontal (lung) si vertical (lat)
dreptunghi::dreptunghi(double x, double y, double lung, double lat)
{
    p = new punct(x, y);
    sv = new segmVe(x, y, y-lat);
    so = new segmOr(x, x+lung, y);
    setArea();
}

dreptunghi::~dreptunghi()
{
    delete p;
    delete so;
    delete sv;
}

void dreptunghi::setArea()
{
//    area = sv->getLength() * so->getLength();
    area = getLength() * getWidth();
}

punct* dreptunghi::getP()
{
    return p;
}

segmOr* dreptunghi::getSo()
{
    return so;
}

segmVe* dreptunghi::getSv()
{
    return sv;
}

double dreptunghi::getLength()
{
    return getSv()->getLength();
}

double dreptunghi::getWidth()
{
    return getSo()->getLength();
}

int dreptunghi::operator==(dreptunghi & d1)
{
    return ((getP() == d1.getP()) && (getSo() == d1.getSo()) && (getSv() == d1.getSv()));
}

int dreptunghi::operator<(dreptunghi & d1)
{

    cout << "\n operator < din dreptunghi:\n" << endl;
    return ( (getArea() < d1.getArea()) ? 1 : 0 );
}

int dreptunghi::operator>(dreptunghi & d1)
{
    cout << "\n operator > din dreptunghi:\n" << endl;
    return ( (getArea() > d1.getArea()) ? 1 : 0 );
}
