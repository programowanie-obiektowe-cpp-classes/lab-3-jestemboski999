#pragma once

#include "Stocznia.hpp"


unsigned int transportujFlota(unsigned int towar)
{
Stocznia fabryka{};
int CargoSum = 0;
int temp = 0;
int sailingShipCounter = 0;

    while(CargoSum < towar)
    {
        Statek* s1 = fabryka();
        temp = s1->transportuj();
        CargoSum = CargoSum + temp;

        if( dynamic_cast<Zaglowiec*>(s1) != nullptr )
        {
            sailingShipCounter++;
        }

        delete s1;
    }

    return sailingShipCounter;
}