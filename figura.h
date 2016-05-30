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
        virtual        ~figura(){}
        virtual int     getID()=0;
        virtual double  getArea(){return 0.0;};

        virtual void    operator+(double[2]){}
        virtual int     operator==(figura &){return 0;}
        virtual int     operator<(figura &){return 0;}
        virtual int     operator>(figura &){return 0;}
};

#endif // FIGURA_H
