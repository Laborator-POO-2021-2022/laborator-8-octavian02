#ifndef PORTOCALE_HPP
#define PORTOCALE_HPP

#include "Baza.hpp"

class Portocale: public Baza
// pretul final = nr_kilograme/pret_kg
{
    int nr_kilograme; // in kilograme
    int pret_kg;

public:
    Portocale();
    Portocale(int, int);
    void afisare();
    int sumaClasa(int );

};

#endif