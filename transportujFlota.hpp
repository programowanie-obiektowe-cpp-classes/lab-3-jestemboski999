#pragma once

#include "Stocznia.hpp"

int CargoSum = 0;
int temp = 0;
int sailingShipCounter = 0;

unsigned int transportujFlota(unsigned int towar)
{
Stocznia fabryka{};

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