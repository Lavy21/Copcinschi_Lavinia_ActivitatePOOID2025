#include <iostream>
#include<string>
using namespace std;

class Magazin
{
	string denumireMagazin;
	int nrAngajati;
	float suprafataMagazinMP;
	bool esteNonStop;

	Magazin(string denumireMagazin, int nrAngajati, float suprafataMagazinMP, bool esteNonStop)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP = suprafataMagazinMP;
		this->esteNonStop = esteNonStop;
	}
};

void main() {
	Magazin m1("Lidl", 80, 523.3, 0);

	Magazin m2("Kaufland", 100, 1028.6, 1);
}

