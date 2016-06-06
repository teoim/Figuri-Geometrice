/**
    Proiect OOP Sem II

        - Tema 10 -

        Ierarhie de clase reprezentand figuri geometrice

        Clasa de baza (abstracta) : figura
        Clase derivate: punct, segment orizontal, segment vertical, dreptunghi

        - punctul este caracterizat de coordonatele sale, x si y, numere intregi;
        - segmentele folosesc fiecare cate 2 puncte, punctul initial si cel final;
        - dreptunghiul foloseste 2 segmenti (vertical si orizontal) si un punct (punctul din coltul stanga sus)

        fiecare figura este unic identificata de o constanta intreaga 'ID' pe care o putem accesa prin metoda getID() a fiecarei clase

*/

#include <iostream>
#include "figura.h"
#include "punct.h"
#include "segmOr.h"
#include "segmVe.h"
#include "dreptunghi.h"
using namespace std;


int main()
{

    punct * p = new punct();        //test constructor fara argumente
    punct * q = new punct();
    punct * r = new punct(10,10);   //test constructor cu argumente

    punct cp = *r;  //test constructor de copiere => PUNCTUL cp VA AVEA ID PROPRIU DAR ACELEASI COORDONATE CA PUNCTUL r. Verificam:
    cout << "cp.id: " << cp.getID() << endl;
    cout << "Coord punct cp: (" << cp.getX() << ", " << cp.getY() << ")  =>  cp++ :" << endl;
    cp++;
    cout << "Coord punct cp: (" << cp.getX() << ", " << cp.getY() << ")" << endl;


    figura * f = q;     //pointer de tip Clasa de baza catre un punct.
    cout << "f.id: " << f->getID() << "\t q.ID: " << q->getID() << "     ## Ne asteptam sa obtinem acelasi ID ##    " << endl;

//Setari + test coordonate initiale:
    cout << "\n" << "Coordonate init 'p' : " << "(" << p->getX() << "," << p->getY() << ")" << "\t## Expected (0,0); " << endl;  //test getter
    p->setX(55);   //test setter
    p->setY(20);   //test setter
    cout << "Coordonate noi 'p' : (" << p->getX() << "," << p->getY() << ")" << "\t## Expected (55,20); " << endl;  //verificare setter

    cout << "Coordonate q = (" << q->getX() << "," << q->getY() << ")" << "\t## Expected (0,0); - " << endl;
    cout << "Coordonate r = (" << r->getX() << "," << r->getY() << ")" << "\t## Expected (10,10); " << endl;

//Test ID-uri:
    cout << "\n" << "p.ID = " << p->getID() << endl;
    cout << "q.ID = " << q->getID() << endl;
    cout << "r.ID = " << r->getID() << endl;

//Test operator "==" pe puncte:
    cout << "\n" << "p si q: " << ( (*p == *q) ? "Puncte identice" : "Puncte diferite") << endl;
    cout << "\t ## q->setX(p->getX())" << endl; q->setX(p->getX());
    cout << "\t ## q->setY(p->getY())" << endl; q->setY(p->getY());
    cout << "p si q: " << ( (*p == *q) ? "Puncte identice" : "Puncte diferite") << endl;

//Test operator "<" si ">" pe puncte:
    cout << "\n" << "p > r: " << ((*p > *r) ? "True" : "False") << endl;
    cout << "r > p: " << ((*r > *p) ? "True" : "False") << endl;
    cout << "\t ## r->setX(55)" << endl; r->setX(55);
    cout << "r < p: " << ((*r < *p) ? "True" : "False") << endl;

//Test Segmente:
    segmOr * s1 = new segmOr(0,10,15);
    segmOr * s2 = new segmOr(0,20,30);
    segmOr s3(*s2); //Test constructor de copiere
    cout << "s1 == s2 : " << ((*s1 == *s2) ? "True" : "False") << endl;  //Test operator==
    cout << "s1 < s2 : " << ((*s1 < *s2) ? "True" : "False") << endl;  //Test operator<
    cout << "s1 > s2 : " << ((*s1 > *s2) ? "True" : "False") << endl;  //Test operator>
    cout << "s3 == s2 : " << ((s3 == *s2) ? "True": "False") << endl; //Test operator== dupa apelare constructor de copiere
    cout << "s2.ID=" << s2->getID() << endl; //Test ID s2, comparatie cu s3 dupa apelare constructor de copiere (ne asteptam valori diferite)
    cout << "s3.ID=" << s3.getID() << endl;  //Test ID s3, comparatie cu s2 dupa apelare constructor de copiere (ne asteptam valori diferite) -- OK
    segmVe * s4 = new segmVe(15, 0, 10);
    segmVe * s5 = new segmVe(30, 0, 20);
    segmVe s6(*s5); //Test constructor de copiere
    cout << "s4.id :" << s4->getID() << endl;
    cout << "s5.id :" << s5->getID() << endl;
    cout << "s6.id :" << s6.getID() << endl;

//Test Dreptunghi:
    dreptunghi * d1 = new dreptunghi();
    dreptunghi * d2 = new dreptunghi(55.5, 60.0, 35.0, 15.0);
    dreptunghi d3(*d1);  //Test constructor de copiere
    figura * f2 = d2;

    cout << "\nAria D1: " << d1->getArea() << endl;
    cout << "Aria D2 (prin f2) : " << f2->getArea() << endl;
//    cout << "Laturi D2 (prin f2): " << (dreptunghi)f2->getLength() << " , " << (dreptunghi)f2->getWidth() << endl;//  Nu este permis - in clasa figura nu avem metodele getLength() si getWidth()
    cout << "ID D1: " << d1->getID() << endl;
    cout << "ID D2: " << d2->getID() << endl;
    cout << "D1 < D2: "  << ((*d1 < *d2 ) ? "True" : "False") << endl;
    cout << "D1 > D2: "  << ((*d1 > *d2 ) ? "True" : "False") << endl;
    cout << "D2 > D1: "  << ((*d2 > *d1 ) ? "True" : "False") << endl;
    cout << "D2 == D1: " << ((*d2 == *d1) ? "True" : "False") << endl;

    delete d1;
    delete d2;
    delete s1;
    delete s2;
    delete s4;
    delete s5;
    delete p;
    delete q;
    delete r;

    return 0;
}
