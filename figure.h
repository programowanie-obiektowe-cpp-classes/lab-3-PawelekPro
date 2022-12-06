#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
using namespace std;

class figure{
    public:
    figure(): field(0) {}
    figure(double p): field(p) {}
    virtual ~figure() {cout << "destruktor figura" << endl;} 

    void set_field(double set_field_value) 
    { 
        field = set_field_value; 
    };

    double get_field() 
    { 
        return field; 
    };

    void print()
    {
        cout << "pole = " << field << '\n';
    }

    virtual void id()
    {
        cout << "Figura bazowa o polu " << field << endl;
    }

    protected:
    double field;
};


#endif
