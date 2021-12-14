
#include "Banana.hpp"
#include "Nuci.hpp"
#include "Portocale.hpp"
#include "Morcovi.hpp"
#include <typeinfo>

int main()
{

Baza **v;

	v = new Baza*[10];

	v[0] = new Morcovi(150, 12);
	v[1] = new Portocale(200,15);
	v[2] = new Nuci(500,3);
	v[3] = new Banana(5);
	v[4] = new Banana(20);

int suma_morcov = 0, suma_portocale = 0, suma_nuci = 0, suma_banana = 0;
	for ( int i = 0; i < 5; i++){

		if(typeid(*v[i])==typeid(Morcovi)) 
			suma_morcov=v[i]->sumaClasa(suma_morcov);

		if(typeid(*v[i])==typeid(Portocale)) 
			suma_portocale=v[i]->sumaClasa(suma_portocale);

		if(typeid(*v[i])==typeid(Nuci)) 
			suma_nuci=v[i]->sumaClasa(suma_nuci);

		if(typeid(*v[i])==typeid(Banana)) 
			suma_banana=v[i]->sumaClasa(suma_banana);

		v[i]->afisare();	
	}

	cout << "Suma totala morcovi: " << suma_morcov << endl;
	cout << "Suma totala banane: " << suma_banana << endl;
	cout << "Suma totala nuci: " << suma_nuci << endl;
	cout << "Suma totala portocale: " << suma_portocale << endl;

	int total = 0;
	total = suma_morcov + suma_portocale + suma_nuci + suma_banana;
	cout << "Suma tuturor alimentelor este: " << total << endl;

	for(int i=0; i < 4; i++)
		for(int j=i+1; j < 5; j++)
			if(typeid(*v[j])==typeid(Banana) && ( (typeid(*v[i])==typeid(Morcovi)) || (typeid(*v[i])==typeid(Portocale)) || (typeid(*v[i])==typeid(Nuci))  ))
				{	

					cout << "Interschimbare" << endl;


				}


	cout << "Suma totala a portocalelor este: " << suma_portocale << endl;
}