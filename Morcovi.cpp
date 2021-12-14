#include "Morcovi.hpp"

Morcovi::Morcovi():cantitate(0),pret_100_grame(0){}

Morcovi::Morcovi(int cant, int pret):cantitate(cant),pret_100_grame(pret){}

void Morcovi::afisare(){

    cout << "Morcov-> " << cantitate*pret_100_grame << endl;

}

int Morcovi::sumaClasa(int s)
{
    s = s + cantitate*pret_100_grame;

    return s;
}