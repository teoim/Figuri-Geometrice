#ifndef SEGMVE_H
#define SEGMVE_H
using namespace std;

class segmVe : public figura
{
    private:
        punct *p1, *p2;
        punct* getP1();
        punct* getP2();

    public:
        segmVe();
        segmVe(const segmVe& sv);
        segmVe(double, double, double);
        ~segmVe();

        double  getLength();
        int     getID(){return ID;}
        segmVe  operator++();
        segmVe  operator++(int);
        segmVe  operator--();
        segmVe  operator--(int);
        int     operator==(segmVe &);
        int     operator<(segmVe &);
        int     operator>(segmVe &);
};

#endif // SEGMVE_H
