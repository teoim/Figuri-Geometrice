#ifndef DREPTUNGHI_H
#define DREPTUNGHI_H
using namespace std;

class dreptunghi : public figura
{
    private:
        figura * p;
        figura * so;
        figura * sv;
        double   area;
        void     setArea();

    protected:
        double   getLength();

    public:
        dreptunghi();
        dreptunghi(double, double, double, double);
        ~dreptunghi();

        double  getArea()   { return area; }
        int     getID()     { return ID; }
};

#endif // DREPTUNGHI_H
