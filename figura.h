#ifndef FIGURA_H
#define FIGURA_H
using namespace std;

class figura
{
    private:
        static int counterID;

    protected:
        const unsigned int ID;  // ! CONSTANTA - initializata prin constructor

    public:
                        figura();
        virtual double  getLength() =0;
        virtual double  getArea()   =0;
        virtual int     getID()     =0;
};

#endif // FIGURA_H
