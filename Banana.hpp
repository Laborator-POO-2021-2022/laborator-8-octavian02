#ifndef BANANA_HPP
#define BANANA_HPP

#include "Baza.hpp"

class Banana: public Baza
// pret final = pret bucata
{
    int pret_bucata;

public:
    Banana();
    Banana(int);
    void afisare();
    int sumaClasa(int);

};
#endif