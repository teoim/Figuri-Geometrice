#include <iostream>
#include "figura.h"
#include "punct.h"
#include "segmOr.h"

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

segmOr::segmOr(const segmOr& so) : p1(so.p1) , p2(so.p2) //initializare membrii (prin copiere)
{
//    cout << "Constructor de copiere segment orizontal\n" << endl;

}

segmOr::~segmOr()
{
//    cout << "Destructor segment orizontal\n" << endl;
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

//OPERATORII ++ SI -- VOR INCREMENTA/DECREMENTA LUNGIMEA SEGMENTULUI CU O UNITATE, IN FELUL URMATOR:
segmOr segmOr::operator++() // PREFIX
{
    p2->setX( p2->getX() + 1 );   //pentru a modifica lungimea segmentului cu o unitate vom actiona asupra coordonatei X a punctului al doilea
    return *this;
}

segmOr segmOr::operator++(int a) // SUFIX
{
    p2->setX( p2->getX() + 1 );   //pentru a modifica lungimea segmentului cu o unitate vom actiona asupra coordonatei X a punctului al doilea
    return *this;
}

segmOr segmOr::operator--() // PREFIX
{
    p2->setX( p2->getX() - 1 );   //pentru a modifica lungimea segmentului cu o unitate vom actiona asupra coordonatei X a punctului al doilea
    return *this;
}

segmOr segmOr::operator--(int a) // SUFIX
{
    p2->setX( p2->getX() - 1 );   //pentru a modifica lungimea segmentului cu o unitate vom actiona asupra coordonatei X a punctului al doilea
    return *this;
}

int segmOr::operator==(segmOr & s1)
{
//    cout << "operator== segment orizontal\n" << endl;
    return ((getP1() == s1.getP1()) && (getP2() == s1.getP2()));
}

int segmOr::operator<(segmOr & s1)
{
//    cout << "operator< segment orizontal\n" << endl;
    return (getLength() < s1.getLength());
}

int segmOr::operator>(segmOr & s1)
{
//    cout << "operator> segment orizontal\n" << endl;
    return (getLength() > s1.getLength());
}
