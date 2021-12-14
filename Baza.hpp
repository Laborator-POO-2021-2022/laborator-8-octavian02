#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Baza
{
public:
        virtual void afisare() = 0;
        virtual ~Baza() = 0;
        virtual int sumaClasa(int) = 0;
        //Baza &operator=(Baza*);
        //void interschimbare(Baza*);
};

#endif