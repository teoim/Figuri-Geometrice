#include "figura.h"
#include "punct.h"
#include "segmOr.h"

// Default:
segmOr::segmOr()
{
    p1 = new punct(0.0, 0.0);
    p2 = new punct(1.0, 0.0);
}

segmOr::segmOr(double x1, double x2, double y)
{
    p1 = new punct(x1, y);
    p2 = new punct(x2, y);
}

segmOr::~segmOr()
{
    delete p1;
    delete p2;
}


double segmOr::getLength()
{
    double L = p2->getX() - p1->getX();
    return L < 0 ? -L : L ;     //Ne asiguram ca lungimea este intotdeauna pozitiva
}

punct* segmOr::getP1()
{
    return p1;
}

punct* segmOr::getP2()
{
    return p2;
}

int segmOr::operator==(segmOr * s1)
{
    return ((getP1() == s1->getP1()) && (getP2() == s1->getP2()));
}

int segmOr::operator<(segmOr * s1)
{
    return (getLength() < s1->getLength());
}

int segmOr::operator>(segmOr * s1)
{
    return (getLength() > s1->getLength());
}
