#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include "Osoba.h"
#include "Wypozyczenie.h"
#include <iostream>

using namespace std;

class Pracownik : public Osoba
{

public:

	string Login;
	string Haslo;

	Pracownik(string Im=0, string Naz=0, string Pes=0, string Addr=0, string Numer=0);

	void zatwierdz_wypozyczenie(Wypozyczenie w);

	void zatwierdz_zwrot(Wypozyczenie w);

	void zatwierdz_zmiany(Wypozyczenie w);
};

#endif
