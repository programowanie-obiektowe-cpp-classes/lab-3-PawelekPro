#ifndef SQUARE_H
#define SQUARE
#include "figure.h"

class square : public figure 
{
   public:
   square() : square(0) {}
   square(double x): dimension(x) { field = dimension*dimension;};
   ~square() {cout << "destruktor kwadrat" << endl;} 
    void id()
    {
        cout << "Kwadrat o polu " << field << endl;
    }

   private:
   double dimension;
};

#endif