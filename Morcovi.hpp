#ifndef MORCOVI_HPP
#define MORCOVI_HPP

#include "Baza.hpp"

class Morcovi: public Baza
// pretul final = cantitate/pret_100_grame
{
    int cantitate; // in grame
    int pret_100_grame;

public:
    Morcovi();
    Morcovi(int, int);
    void afisare();
    int sumaClasa(int);

};

#endif