#include "Banana.hpp"

Banana::Banana():pret_bucata(0){}

Banana::Banana(int pret):pret_bucata(pret){}

void Banana::afisare(){
	cout << "Banana-> " << pret_bucata << endl ;
}

int Banana::sumaClasa(int s)
{
	s = s + pret_bucata;

	return s;
}

