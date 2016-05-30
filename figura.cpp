#include <iostream>
#include "figura.h"

using namespace std;

int figura::counterID;  //declarare membru static


figura::figura() : ID(++counterID) //INITIALIZAREA CONSTANTEI "ID" CU VALOAREA CURENTA A VARIABILEI STATICE "counterID" INCREMENTATA CU 1
{
    //ctor
}
