#ifndef DREPTUNGHI_H
#define DREPTUNGHI_H
using namespace std;

class dreptunghi : public figura
{
    private:
        punct *  p;
        segmOr * so;
        segmVe * sv;
        double   area;
        void     setArea();

    public:
        dreptunghi();
        dreptunghi(double, double, double, double);
        dreptunghi(const dreptunghi& d);
        ~dreptunghi();

        double  getArea()   { return area; }
        int     getID()     { return ID; }
        punct*  getP();
        segmOr* getSo();
        segmVe* getSv();
        double  getLength();
        double  getWidth();
        dreptunghi operator++();
        dreptunghi operator++(int);
        dreptunghi operator--();
        dreptunghi operator--(int);
        int        operator==(dreptunghi &);
        int        operator<(dreptunghi &);
        int        operator>(dreptunghi &);
};

#endif // DREPTUNGHI_H
