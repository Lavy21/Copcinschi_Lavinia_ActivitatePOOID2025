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

	Magazin(string denumireMagazin, int nrAngajati) :CUI(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 1;
	}

	Magazin(string denumireMagazin, int nrAngajati,bool esteNonStop) :CUI(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP =0;
		this->esteNonStop = esteNonStop;
	}
	Magazin(string denumireMagazin, int nrAngajati, float suprafataMagazinMP, bool esteNonStop, int CUI): CUI(CUI)
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
		return this->suprafataMagazinMP;
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
	void setNrAngajati(int nrAngajatiNou) {
		this->nrAngajati = nrAngajatiNou;
	}
	void setSuprafataMagazinMP(float suprafataNouaMagazinMP) {
		this->suprafataMagazinMP = suprafataNouaMagazinMP;
	}
	void setEsteNonStop(bool esteNouNonStop) {
		this->esteNonStop = esteNouNonStop;
	}
};

int Magazin::clasaCaenPrincipala = 15;

void main() {
	Magazin m1("Lidl", 80, 523.3, 0, 123);
	cout << m1.getDenumireMagazin() << endl;
	cout << m1.getNrAngajati() << endl;
	cout << m1.getSuprafataMagazinMP() << endl;
	cout << m1.getEsteNonStop()<< endl;
	cout << m1.getCUI() << endl;
	cout << endl;

	Magazin m2("Kaufland", 100, 1028.6, 1,465);
	cout << m2.getDenumireMagazin() << endl;
	cout << m2.getNrAngajati() << endl;
	cout << m2.getSuprafataMagazinMP() << endl;
	cout << m2.getEsteNonStop() << endl;
	cout << m2.getCUI() << endl;
	cout << endl;

	Magazin m3;
	cout << m3.getDenumireMagazin() << endl;
	cout << m3.getNrAngajati() << endl;
	cout << m3.getSuprafataMagazinMP() << endl;
	cout << m3.getEsteNonStop() << endl;
	cout << m3.getCUI() << endl;
	cout << endl;

	Magazin m4;
	cout << m4.getDenumireMagazin() << endl;
	cout << m4.getNrAngajati() << endl;
	cout << m4.getSuprafataMagazinMP() << endl;
	cout << m4.getEsteNonStop() << endl;
	cout << m4.getCUI() << endl;
	cout << endl;

	Magazin m5("Cora");
	cout << m5.getDenumireMagazin() << endl;
	cout << m5.getNrAngajati() << endl;
	cout << m5.getSuprafataMagazinMP() << endl;
	cout << m5.getEsteNonStop() << endl;
	cout << m5.getCUI() << endl;
	cout << endl;

	cout << "Setteri pentru Magazin3" << endl;
	cout << "Magazin 3 inainte de setteri" << endl;
	cout << m3.getDenumireMagazin() << endl;
	cout << m3.getNrAngajati() << endl;
	cout << m3.getSuprafataMagazinMP() << endl;
	cout << m3.getEsteNonStop() << endl;
	cout << m3.getCUI() << endl;
	cout << endl;

	m3.setDenumireMagazin("Alro");
	m3.setNrAngajati(20);
	m3.setSuprafataMagazinMP(147.95);
	m3.setEsteNonStop(1);

	cout << "Magazin 3 dupa setteri" << endl;
	cout << m3.getDenumireMagazin() << endl;
	cout << m3.getNrAngajati() << endl;
	cout << m3.getSuprafataMagazinMP() << endl;
	cout << m3.getEsteNonStop() << endl;
	cout << m3.getCUI() << endl;
	cout << endl;
}

