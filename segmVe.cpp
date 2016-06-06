#include <iostream>
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

segmVe::segmVe(const segmVe& sv) : p1(sv.p1) , p2(sv.p2) //initializare membrii (prin copiere)
{
//    cout << "Constructor de copiere segment vertical\n" << endl;
}

segmVe::~segmVe()
{
//    cout << "Destructor segment vertical\n" << endl;
    delete p1;
    delete p2;
}

double segmVe::getLength()
{
    double L = p2->getY() - p1->getY();
    return L < 0 ? -L : L;     //Ne asiguram ca valoarea lungimii este intotdeauna pozitiva
}

punct* segmVe::getP1()
{
    return p1;
}

punct* segmVe::getP2()
{
    return p2;
}

//OPERATORII ++ SI -- VOR INCREMENTA/DECREMENTA LUNGIMEA SEGMENTULUI CU O UNITATE, IN FELUL URMATOR:
segmVe segmVe::operator++() //PREFIX
{
    p2->setY( p2->getY() + 1 );   //pentru a modifica lungimea segmentului cu o unitate vom actiona asupra coordonatei Y a punctului al doilea
    return *this;
}
segmVe segmVe::operator++(int a) //SUFIX
{
    p2->setY( p2->getY() + 1 );   //pentru a modifica lungimea segmentului cu o unitate vom actiona asupra coordonatei Y a punctului al doilea
    return *this;
}
segmVe segmVe::operator--() //PREFIX
{
    p2->setY( p2->getY() - 1 );   //pentru a modifica lungimea segmentului cu o unitate vom actiona asupra coordonatei Y a punctului al doilea
    return *this;
}
segmVe segmVe::operator--(int a) //SUFIX
{
    p2->setY( p2->getY() - 1 );   //pentru a modifica lungimea segmentului cu o unitate vom actiona asupra coordonatei Y a punctului al doilea
    return *this;
}

int segmVe::operator==(segmVe & s1)
{
    return ((getP1() == s1.getP1()) && (getP2() == s1.getP2()));
}

int segmVe::operator<(segmVe & s1)
{
    return (getLength() < s1.getLength());
}

int segmVe::operator>(segmVe & s1)
{
    return (getLength() > s1.getLength());
}
