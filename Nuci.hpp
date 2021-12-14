#ifndef NUCI_HPP
#define NUCI_HPP

#include "Baza.hpp"

class Nuci: public Baza
// pretul final = cantitate/pret_100_grame
{
    int cantitate; // in grame
    int pret_100_grame;

public:
    Nuci();
    Nuci(int, int);
    void afisare();
    int sumaClasa(int);

};

#endif