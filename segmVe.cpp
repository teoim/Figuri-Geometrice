#include "figura.h"
#include "punct.h"
#include "segmVe.h"

segmVe::segmVe()
{
    p1 = new punct(0.0, 0.0);
    p2 = new punct(0.0, 1.0);
}

segmVe::segmVe(double x, double y1, double y2)
{
    p1 = new punct(x, y1);
    p2 = new punct(x, y2);
}

segmVe::~segmVe()
{
    delete p1;
    delete p2;
}

double segmVe::getLength()
{
    double L = p2->getY() - p1->getY();
    return L < 0 ? -L : L;     //Ne asiguram ca lungimea este intotdeauna pozitiva
}
