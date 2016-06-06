#ifndef SEGMOR_H
#define SEGMOR_H
using namespace std;

class segmOr : public figura
{
    private:
        punct *p1, *p2;
        punct *getP1();
        punct *getP2();

    public:
        segmOr();
        segmOr(double, double, double);
        segmOr(const segmOr& so);
        ~segmOr();

        double  getLength();
        int     getID(){return ID;}
        segmOr  operator++();
        segmOr  operator++(int);
        segmOr  operator--();
        segmOr  operator--(int);
        int     operator==(segmOr &);
        int     operator<(segmOr &);
        int     operator>(segmOr &);
};

#endif // SEGMOR_H
