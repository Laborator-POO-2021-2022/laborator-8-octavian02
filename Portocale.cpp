#include "Portocale.hpp"

Portocale::Portocale():nr_kilograme(0),pret_kg(0){}

Portocale::Portocale(int nr, int pret_kg):nr_kilograme(nr),pret_kg(pret_kg){}

void Portocale::afisare(){

    cout << "Portocale-> " << nr_kilograme*pret_kg << endl;

}

int Portocale::sumaClasa(int s)
{
    s = s + nr_kilograme*pret_kg;

    return s;
}