#define _CRT_SECURE_NO_WARNINGS
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

	char* numeProprietar;
	int nrProduse;
	float* preturiProduse;
	string* denumiriProduse;

public:

	Magazin():CUI(0)
	{
		this->denumireMagazin = "Necunoscut";
		this->nrAngajati = 0;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 1;

		this->numeProprietar = new char[strlen("Necunoscut") + 1];
		strcpy(this->numeProprietar, "Necunoscut");

		this->nrProduse = 0;
		this->preturiProduse = NULL;
		this->denumiriProduse = NULL;
	}

	Magazin(string denumireMagazin) :CUI(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = 0;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 1;

		this->numeProprietar = new char[strlen("Necunoscut") + 1];
		strcpy(this->numeProprietar, "Necunoscut");

		this->nrProduse = 0;
		this->preturiProduse = NULL;
		this->denumiriProduse = NULL;
	}

	Magazin(string denumireMagazin, int nrAngajati) :CUI(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP = 0;
		this->esteNonStop = 1;

		this->numeProprietar = new char[strlen("Necunoscut") + 1];
		strcpy(this->numeProprietar, "Necunoscut");

		this->nrProduse = 0;
		this->preturiProduse = NULL;
		this->denumiriProduse = NULL;
	}

	Magazin(string denumireMagazin, int nrAngajati,bool esteNonStop) :CUI(0)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP =0;
		this->esteNonStop = esteNonStop;

		this->numeProprietar = new char[strlen("Necunoscut") + 1];
		strcpy(this->numeProprietar, "Necunoscut");

		this->nrProduse = 0;
		this->preturiProduse = NULL;
		this->denumiriProduse = NULL;
	}
	Magazin(string denumireMagazin, int nrAngajati, float suprafataMagazinMP, bool esteNonStop, int CUI, const char* numeProprietar, int nrProduse, float*preturiProduse, string* denumiriProduse): CUI(CUI)
	{
		this->denumireMagazin = denumireMagazin;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazinMP = suprafataMagazinMP;
		this->esteNonStop = esteNonStop;

		this->numeProprietar = new char[strlen(numeProprietar) + 1];
		strcpy(this->numeProprietar , numeProprietar);

		this->nrProduse = nrProduse;

		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		for (int i = 0; i < this->nrProduse; i++) {
			this->preturiProduse[i] = preturiProduse[i];
			this->denumiriProduse[i] = denumiriProduse[i];
		}

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

	char* getNumeProprietar() {
		return this->numeProprietar;
	}

	int getNrProduse() {
		return this->nrProduse;
	}

	float* getPreturiProduse() {
		return this->preturiProduse;
	}

	string* getDenumiriProduse() {
		return this->denumiriProduse;
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
	void setNumeProprietar(const char* numeNouProprietar) {
		if (this->numeProprietar != NULL) {
			delete[] this->numeProprietar;
			this->numeProprietar = new char[strlen(numeNouProprietar) + 1];
			strcpy(this->numeProprietar, numeNouProprietar);
		}
		else {
			this->numeProprietar = new char[strlen(numeNouProprietar) + 1];
			strcpy(this->numeProprietar, numeNouProprietar);
		}
	}
	void setProduse(int nrNouProduse, float* preturiNoiProsuse, string* denumiriNoiProduse) {
		if ((this->preturiProduse != NULL) && (this->denumiriProduse != NULL)) {
			delete[] this->preturiProduse;
			delete[] this->denumiriProduse;

			this->nrProduse = nrNouProduse;

			this->preturiProduse = new float[this->nrProduse];
			this->denumiriProduse = new string[this->nrProduse];

			for (int i = 0; i < this->nrProduse; i++) {
				this->preturiProduse[i] = preturiNoiProsuse[i];
				this->denumiriProduse[i] = denumiriNoiProduse[i];
			}
		}
		else {
			this->nrProduse = nrNouProduse;

			this->preturiProduse = new float[this->nrProduse];
			this->denumiriProduse = new string[this->nrProduse];

			for (int i = 0; i < this->nrProduse; i++) {
				this->preturiProduse[i] = preturiNoiProsuse[i];
				this->denumiriProduse[i] = denumiriNoiProduse[i];
			}
		}
	}

};

int Magazin::clasaCaenPrincipala = 15;

void main() {

	float preturi[] = { 10.2,52.8,74.1,5.4 };
	string denumiri[] = { "peste","lamai","carne","chifle" };
	Magazin m1("Lidl", 80, 523.3, 0, 123, "Alexandra", 4, preturi, denumiri);
	cout << m1.getDenumireMagazin() << endl;
	cout << m1.getNrAngajati() << endl;
	cout << m1.getSuprafataMagazinMP() << endl;
	cout << m1.getEsteNonStop() << endl;
	cout << m1.getCUI() << endl;
	cout << m1.getNumeProprietar() << endl;
	cout << m1.getNrProduse() << endl;
	for (int i = 0; i < m1.getNrProduse(); i++) {
		cout << m1.getPreturiProduse()[i] << ";" << m1.getDenumiriProduse()[i] << endl;
	}
	cout << endl;


	float preturi1[] = { 15.4,52.7,14.5,4.1 };
	string denumiri1[] = { "cafea","ceai","suc","apa" };
	Magazin m2("Kaufland", 100, 1028.6, 1, 465, "Costel", 4, preturi1, denumiri1);
	cout << m2.getDenumireMagazin() << endl;
	cout << m2.getNrAngajati() << endl;
	cout << m2.getSuprafataMagazinMP() << endl;
	cout << m2.getEsteNonStop() << endl;
	cout << m2.getCUI() << endl;
	cout << m2.getNumeProprietar() << endl;
	cout << m2.getNrProduse() << endl;
	for (int i = 0; i < m2.getNrProduse(); i++) {
		cout << m2.getPreturiProduse()[i] << ";" << m2.getDenumiriProduse()[i] << endl;
	}
	cout << endl;

	Magazin m3;
	cout << m3.getDenumireMagazin() << endl;
	cout << m3.getNrAngajati() << endl;
	cout << m3.getSuprafataMagazinMP() << endl;
	cout << m3.getEsteNonStop() << endl;
	cout << m3.getCUI() << endl;
	cout << m3.getNumeProprietar() << endl;
	cout << m3.getNrProduse() << endl;
	for (int i = 0; i < m3.getNrProduse(); i++) {
		cout << m3.getPreturiProduse()[i] << ";" << m3.getDenumiriProduse()[i] << endl;
	}
	cout << endl;

	Magazin m4;
	cout << m4.getDenumireMagazin() << endl;
	cout << m4.getNrAngajati() << endl;
	cout << m4.getSuprafataMagazinMP() << endl;
	cout << m4.getEsteNonStop() << endl;
	cout << m4.getCUI() << endl;
	cout << m4.getNumeProprietar() << endl;
	cout << m4.getNrProduse() << endl;
	for (int i = 0; i < m4.getNrProduse(); i++) {
		cout << m4.getPreturiProduse()[i] << ";" << m4.getDenumiriProduse()[i] << endl;
		cout << endl;
	}

		Magazin m5("Cora");
		cout << m5.getDenumireMagazin() << endl;
		cout << m5.getNrAngajati() << endl;
		cout << m5.getSuprafataMagazinMP() << endl;
		cout << m5.getEsteNonStop() << endl;
		cout << m5.getCUI() << endl;
		cout << m5.getNumeProprietar() << endl;
		cout << m5.getNrProduse() << endl;
		for (int i = 0; i < m5.getNrProduse(); i++) {
			cout << m5.getPreturiProduse()[i] << ";" << m5.getDenumiriProduse()[i] << endl;
			cout << endl;
		}

		cout << "Setteri pentru Magazin3" << endl;
		cout << "Magazin 3 inainte de setteri" << endl;
		cout << m3.getDenumireMagazin() << endl;
		cout << m3.getNrAngajati() << endl;
		cout << m3.getSuprafataMagazinMP() << endl;
		cout << m3.getEsteNonStop() << endl;
		cout << m3.getCUI() << endl;
		cout << m3.getNumeProprietar() << endl;
		cout << m3.getNrProduse() << endl;
		for (int i = 0; i < m3.getNrProduse(); i++) {
			cout << m3.getPreturiProduse()[i] << ";" << m3.getDenumiriProduse()[i] << endl;
			cout << endl;
		}

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
		cout << m3.getNumeProprietar() << endl;
		cout << m3.getNrProduse() << endl;
		for (int i = 0; i < m3.getNrProduse(); i++) {
			cout << m3.getPreturiProduse()[i] << ";" << m3.getDenumiriProduse()[i] << endl;
			cout << endl;
		}

}

