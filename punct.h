#ifndef PUNCT_H
#define PUNCT_H
using namespace std;

class punct : public figura
{

    private:
        double  coordX, coordY;

    protected:
        double  getLength();
        double  getArea();

    public:
        punct();
        punct(double, double);
        virtual ~punct()    {};

        void    setX(double);
        void    setY(double);
        double  getX()      { return coordX; }
        double  getY()      { return coordY; }
        int     getID()     { return ID; }


        int     operator==(punct*);
        int     operator<(punct*);

};

#endif
