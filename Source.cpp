#include <iostream>
#include<string>
using namespace std;

class Magazin
{
	string denumireMagazin;
	int nrAngajati;
	float suprafataMagazinMP;
	bool esteNonStop;
	const int CUI;
	static int clasaCaenPrincipala;

public:

	Magazin():CUI(0)
	{
		this->denumireMagazin = "Necunoscut";
		this->nrAngajati = 0;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 1;
	}

	Magazin(string denumireMagazin) :CUI(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = 0;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 1;
	}

	Magazin(string denumireMagazin, int nrAngajati, float suprafataMagazinMP, bool esteNonStop): CUI(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP = suprafataMagazinMP;
		this->esteNonStop = esteNonStop;
	}

	string getDenumireMagazin() {
		return this->denumireMagazin;
	}
	int getNrAngajati() {
		return this->nrAngajati;
	}
	float getSuprafataMagazinMP() {
		this->suprafataMagazinMP;
	}
	bool getEsteNonStop() {
		return this->esteNonStop;
	}
	int getCUI() {
		return this->CUI;
	}

	void setDenumireMagazin(string denumireNouaMagazin) {
		this->denumireMagazin = denumireNouaMagazin;
	}
	void setnrAngajati(int nrAngajatiNou) {
		this->nrAngajati = nrAngajatiNou;
	}
};

void main() {
	Magazin m1("Lidl", 80, 523.3, 0);

	Magazin m2("Kaufland", 100, 1028.6, 1);
}

