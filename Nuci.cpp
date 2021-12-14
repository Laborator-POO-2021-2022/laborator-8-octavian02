#include "Nuci.hpp"

Nuci::Nuci() : cantitate(0), pret_100_grame(0) {}

Nuci::Nuci(int cantitate, int pret_100) : cantitate(cantitate), pret_100_grame(pret_100) {}

void Nuci::afisare()
{
    cout << "Nuci-> " << cantitate*pret_100_grame << endl;
    
}

int Nuci::sumaClasa(int s)
{
    s = s + cantitate * pret_100_grame;

    return s;
}