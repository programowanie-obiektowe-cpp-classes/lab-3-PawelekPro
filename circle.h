#ifndef CIRCLE_H
#define CIRCLE
#include "figure.h"
#include <math.h>

class circle : public figure 
{
    public:
    circle(): circle(0) {}
    circle(double r) : radius(r) { field = 2 * M_PI * radius*radius;};
     ~circle() {cout << "destruktor kolo" << endl;} 
     void id()
    {
        cout << "Kolo o polu " << field << endl;
    }


    private:
    double radius;
};

#endif
