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
    area = sv->getLength() * so->getLength();
}
