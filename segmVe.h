#ifndef SEGMVE_H
#define SEGMVE_H
using namespace std;

class segmVe : public figura
{
    private:
        punct *p1, *p2;

    protected:
        double  getArea()   { }

    public:
        segmVe();
        segmVe(double, double, double);
        ~segmVe();

        double  getLength();
        int     getID(){return ID;}
};

#endif // SEGMVE_H
