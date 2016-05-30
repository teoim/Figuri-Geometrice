#ifndef SEGMOR_H
#define SEGMOR_H
using namespace std;

class segmOr : public figura
{
    private:
        punct *p1, *p2;

    protected:
        double  getArea()   { }

    public:
        segmOr();
        segmOr(double, double, double);
        ~segmOr();

        double  getLength();
        int     getID(){return ID;}
};

#endif // SEGMOR_H
