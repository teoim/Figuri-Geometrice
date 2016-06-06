#ifndef PUNCT_H
#define PUNCT_H
using namespace std;

class punct : public figura
{

    private:
        double  coordX, coordY;

    public:
        punct();
        punct(const punct& p);
        punct(double, double);
        ~punct();

        void    setX(double);
        void    setY(double);
        double  getX()      { return coordX; }
        double  getY()      { return coordY; }
        int     getID()     { return ID; }


      //  punct    operator+(double[]);
        punct   operator++();     //prefix
        punct   operator++(int);  //sufix
        punct   operator--();     //prefix
        punct   operator--(int);  //sufix
        int     operator==(punct &);
        int     operator<(punct &);
        int     operator>(punct &);

};

#endif
