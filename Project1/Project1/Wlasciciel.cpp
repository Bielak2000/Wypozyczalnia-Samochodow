#include "Wlasciciel.h"
#include <fstream>
#include <iostream>
using namespace std;

Wlasciciel::Wlasciciel()
{
	this->Imie = "Jan";
	this->Nazwisko = "Nowak";
	this->Pesel = "92839284782";
	this->Adres = "Warszawa, ul. Szkolna 5";
	this->Numer_telefonu = "983290139";
	this->Haslo = "LAB01";
	this->Login = "JanNowak";
}

void Wlasciciel::dodaj_pojazd()
{
	fstream plik;
	plik.open("Pojazdy.txt");
	if (plik.good())
	{
		plik.seekg(0, ios::end);
		cout << "Podaj dane pojazdu:" << endl;
		string Numer_rejestracyjny, Rodzaj, Marka, Model, Rok, Silnik, Przebieg, Cena_za_godzine;
		cout << "Numer_rejestracyjny: ";
		cin>>Numer_rejestracyjny;
		cout << "Rodzaj: ";
		cin>>Rodzaj;
		cout << "Marka: ";
		cin>>Marka;
		cout << "Model: ";
		cin>>Model;
		cout << "Rok: ";
		cin >> Rok;
		cout << "Silnik: ";
		cin >> Silnik;
		cout << "Przebieg: ";
		cin >> Przebieg;
		cout << "Cena za godzine: ";
		cin >> Cena_za_godzine;
		plik << "\n" << Numer_rejestracyjny << " " << Rodzaj << " " << Marka << " " << Model << " " <<
			Rok << " " << Silnik << " " << Przebieg << " " << Cena_za_godzine << " 1";
	}
	else
	{
		cout << "Nie udalo sie dodac pojazdu!" << endl;
	}
}

void Wlasciciel::zmien_cene(string nr_rej)
{
	// TODO - implement Wlasciciel::zmien_cene
	throw "Not yet implemented";
}

void Wlasciciel::usun_pojazd(string nr_rej)
{
	// TODO - implement Wlasciciel::usun_pojazd
	throw "Not yet implemented";
}

void Wlasciciel::zarzadzaj_dzialalnoscia()
{
	// TODO - implement Wlasciciel::zarzadzaj_dzialalnoscia
	throw "Not yet implemented";
}
