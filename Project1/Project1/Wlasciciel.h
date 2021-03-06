#ifndef WLASCICIEL_H
#define WLASCICIEL_H
#include "Osoba.h"
#include "Pojazd.h"
#include "Wypozyczenie.h"
#include <iostream>

using namespace std;

class Wlasciciel : public Osoba
{
	string login;
	string haslo;
public:
	
	Wlasciciel();		//Konstruktor domyslny właściciela

	void dodaj_pojazd();	//Metoda dodająca pojazd	

	void zmien_cene(string nr_rej, Pojazd* pojazdy);	//Metoda zmieniająca cene pojazdu

	void usun_pojazd(string nr_rej, Pojazd* pojazdy);	//Metoda usuwająca pojazd

	//Gettery
	string get_login();
	string get_haslo();
};

#endif
