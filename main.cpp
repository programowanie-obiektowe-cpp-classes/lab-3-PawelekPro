#include <iostream>
using namespace std;
#include "circle.h"
#include "square.h"
#include "figure.h"

class Pen {/*...*/};
class Rubber {/*...*/};
class penWithRubber : public Pen, public Rubber {};

void id(figure& f)
{
    f.id();
}

int main()
{
    figure *ptab[3];

    ptab[0] = new circle(5);
    ptab[1] = new square(6);
    ptab[2] = new figure();
    
    for(int i = 0; i < 3; ++i)
    {
        id(*ptab[i]);
        ptab[i] -> id();
    }
    
    // figure figura;
    // square kwadrat(5);
    // circle kolo(2);


    // figura.id();
    // kwadrat.id();
    // kolo.id();
    // id(figura);
    // id(kwadrat);
    // id(kolo);

    delete ptab[0];
    delete ptab[1];
    delete ptab[2];
}







