#include <iostream>
#include "figura.h"
#include "punct.h"
#include "segmOr.h"
#include "segmVe.h"
#include "dreptunghi.h"
using namespace std;


int main()
{

    punct * p = new punct();
    punct * q = new punct();
    punct * r = new punct(10,10);
    segmOr segOr1;
    segmVe segVe1;

//Setari + test coordonate initiale:
    cout << "\n" << "Coordonate init 'p' : " << "(" << p->getX() << "," << p->getY() << ")" << endl;
    p->setX(55);
    p->setY(20);
    cout << "Coordonate noi 'p' : (" << p->getX() << "," << p->getY() << ")" << endl;
    cout << "Coordonate q = (" << q->getX() << "," << q->getY() << ")" << endl;
    cout << "Coordonate r = (" << r->getX() << "," << r->getY() << ")" << endl;

//Test ID-uri:
    cout << "\n" << "p.ID = " << p->getID() << endl;
    cout << "q.ID = " << q->getID() << endl;
    cout << "r.ID = " << r->getID() << endl;

//Test operator "==" pe puncte:
    cout << "\n" << "p si q: " << ( (*p == *q) ? "Puncte identice" : "Puncte diferite") << endl;
    cout << "\t * q->setX(p->getX())" << endl; q->setX(p->getX());
    cout << "\t * q->setY(p->getY())" << endl; q->setY(p->getY());
    cout << "p si q: " << ( (*p == *q) ? "Puncte identice" : "Puncte diferite") << endl;

//Test operator "<" si ">" pe puncte:
    cout << "\n" << "p > r: " << ((*p > *r) ? "True" : "False") << endl;
    cout << "r > p: " << ((*r > *p) ? "True" : "False") << endl;
    cout << "\t * r->setX(55)" << endl; r->setX(55);
    cout << "r < p: " << ((*r < *p) ? "True" : "False") << endl;

    punct s(25234,23425);
    cout << "\n Coordonate s = (" << s.getX() << "," << s.getY() << ")" << endl;
    cout << "s.ID = " << s.getID() << endl;


//Test Dreptunghi:
    dreptunghi * d1 = new dreptunghi();
    dreptunghi * d2 = new dreptunghi(55.5, 60.0, 35.0, 15.0);
    figura * f1 = new dreptunghi(10.0, 10.0, 5.0, 6.0);
    figura * f2 = d2;


    cout << "\nAria D1: " << d1->getArea() << endl;
    cout << "Aria D2 (prin f2) : " << f2->getArea() << endl;
//    cout << "Laturi D2 (prin f2): " << f2.getLength << " , " << f2.getWidth << endl;  Nu este permis - in clasa figura nu avem metodele getLength si getWidth
    cout << "ID D1: " << d1->getID() << endl;
    cout << "ID D2: " << d2->getID() << endl;
    cout << "D1 < D2: " << ((*d1 < *d2) ? "True" : "False") << endl;
    cout << "D1 > D2: " << ((*d1 > *d2) ? "True" : "False") << endl;
    cout << "D2 > D1: " << ((*d2 > *d1) ? "True" : "False") << endl;
    cout << "D2 == D1: " << ((*d2 == *d1) ? "True" : "False") << endl;

    delete d1;
    delete d2;

    return 0;
}
