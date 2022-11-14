#pragma once

#include "Stocznia.hpp"
#include "Statki.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if(towar == 0) { return 0; }

     Stocznia stocznia{}; 
     unsigned int zaglowiec = 0;
     unsigned int act_towar = 0;

    while(act_towar < towar){
        Statek* s = stocznia();
        act_towar = act_towar + s -> transportuj();
        if(dynamic_cast<Zaglowiec*>(s)){
            zaglowiec++;
        }
        delete s;
    }
    return zaglowiec;
}