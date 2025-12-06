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
	~Magazin() {
		if (this-> preturiProduse != NULL) {
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL) {
			delete[] this->denumiriProduse;
		}
		if (this->numeProprietar != NULL) {
			delete[] this->numeProprietar;
		}
		cout << "am apelat destructorul" << endl;
	}

	Magazin(const Magazin& obj) :CUI(obj.CUI) {
		this->denumireMagazin = obj.denumireMagazin;
		this->nrAngajati = obj.nrAngajati;
		this->suprafataMagazinMP = obj.suprafataMagazinMP;
		this->esteNonStop = obj.esteNonStop;

		this->numeProprietar = new char[strlen(obj.numeProprietar) + 1];
		strcpy(this->numeProprietar, obj.numeProprietar);

		this->nrProduse = obj.nrProduse;

		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];
		for (int i = 0; i < nrProduse; i++) {
			this->preturiProduse[i] = obj.preturiProduse[i];
			this->denumiriProduse[i] = obj.denumiriProduse[i];
		}
	}
	Magazin& operator=(const Magazin& obj) {
		if (this->numeProprietar != NULL) {
			delete[] this->numeProprietar;
		}
		if (this->denumiriProduse != NULL) {
			delete[] this->denumiriProduse;
		}
		if (preturiProduse != NULL) {
			delete[] this->preturiProduse;
		}
		this->denumireMagazin = obj.denumireMagazin;
		this->nrAngajati = obj.nrAngajati;
		this->suprafataMagazinMP = obj.suprafataMagazinMP;
		this->esteNonStop = obj.esteNonStop;

		this->numeProprietar = new char[strlen(obj.numeProprietar) + 1];
		strcpy(this->numeProprietar, obj.numeProprietar);
		this->nrProduse = obj.nrProduse;

		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];
		for (int i = 0; i < nrProduse; i++) {
			this->preturiProduse[i] = obj.preturiProduse[i];
			this->denumiriProduse[i] = obj.denumiriProduse[i];
		}
		return *this;
	}

	float pretMinim() {
		float pretMinim;
		pretMinim = this->preturiProduse[0];
		for (int i = 1; i < this->nrProduse; i++) {
			if (this->preturiProduse[i] < pretMinim) {
				pretMinim = this->preturiProduse[i];
			}
		}
		return pretMinim;
	}

	float pretMaxim() {
		float pretMaxim;
		pretMaxim = this->preturiProduse[0];
		for (int i = 1; i < this->nrProduse; i++) {
			if (this->preturiProduse[i] > pretMaxim) {
				pretMaxim = this->preturiProduse[i];
			}
		}
		return pretMaxim;
	}

	float sumaPreturi() {
		float suma=0;
		for (int i = 0; i < this->nrProduse; i++) {
			suma = suma + this->preturiProduse[i];
		}
		return suma;
	}

	float pretMediu() {
		float medie;
		medie = this->sumaPreturi() / this->nrProduse;
		return medie;
	}

	void aplicareDiscount(float reducere, int pozitieProdusRedus)
	{
		if (pozitieProdusRedus >= 0 && pozitieProdusRedus < this->nrProduse)
		{
			this->preturiProduse[pozitieProdusRedus] = this->preturiProduse[pozitieProdusRedus] - this->preturiProduse[pozitieProdusRedus] * reducere;
		}
		else
		{
			cout << "Pozitie din vector inexistenta";
		}
	}

	void adaugaProdusNou(float pretProdusNou, string denumireProdusNou)
	{
		Magazin copie(*this); 
		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}
		this->nrProduse++;
		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];
		for (int i = 0; i < copie.nrProduse; i++)
		{
			this->preturiProduse[i] = copie.preturiProduse[i];
			this->denumiriProduse[i] = copie.denumiriProduse[i];
		}
		this->preturiProduse[this->nrProduse - 1] = pretProdusNou;
		this->denumiriProduse[this->nrProduse - 1] = denumireProdusNou;
	}

	void eliminaProdusPozitie(int pozitieDorita)
	{
		Magazin copie(*this);
		if (this->preturiProduse != NULL){
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL){
			delete[] this->denumiriProduse;
		}
		this->nrProduse=this->nrProduse-1;

		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		for (int i = 0; i < pozitieDorita; i++)
		{
			this->preturiProduse[i] = copie.preturiProduse[i];
			this->denumiriProduse[i] = copie.denumiriProduse[i];
		}

		for (int i = pozitieDorita + 1; i < copie.nrProduse; i++)
		{
			this->preturiProduse[i - 1] = copie.preturiProduse[i];
			this->denumiriProduse[i - 1] = copie.denumiriProduse[i];
		}
	}

	void eliminaProdusValore(float pretCautat)
	{
		Magazin copie(*this);

		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		int nr = 0;
		for (int i = 0; i < copie.nrProduse; i++)
		{
			if (copie.preturiProduse[i] == pretCautat)
			{
				nr++; 
			}
		}

		this->nrProduse = this->nrProduse - nr;

		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		int poz = 0;
		for (int i = 0; i < copie.nrProduse; i++)
		{
			if (copie.preturiProduse[i] != pretCautat)
			{
				this->preturiProduse[poz] = copie.preturiProduse[i];
				this->denumiriProduse[poz] = copie.denumiriProduse[i];
				poz++;
			}
		}
	}

	bool operator<=(const Magazin& obj)
	{
		if (this->suprafataMagazinMP <= obj.suprafataMagazinMP)
		{
			return true; 
		}
		else
		{
			return false; 
		}
	}

	friend ostream& operator<<(ostream& o, const Magazin& obj)
	{
		o << "Denumire magazin:" << obj.denumireMagazin << endl;
		o << "Este non-stop? (1-da 0-nu):" << obj.esteNonStop << endl;
		o << "Nr angajati:" << obj.nrAngajati << endl;
		o << "Suprafata:" << obj.suprafataMagazinMP << endl;
		o << "Nume proprietar:" << obj.numeProprietar << endl;
		o << "Nr produse:" << obj.nrProduse << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < obj.nrProduse; i++)
		{
			o << obj.preturiProduse[i] << " ; " << obj.denumiriProduse[i] << endl;
		}
		o << obj.CUI << endl << endl;

		return o;
	}

	friend istream& operator >>(istream& i, Magazin& obj)
	{
		delete[] obj.numeProprietar;
		delete[] obj.preturiProduse;
		delete[] obj.denumiriProduse;

		cout << "Introduceti denumirea magazinului:";
		i >> obj.denumireMagazin;
		cout << "Introduceti 1 daca magazinul este non-stop sau 0 daca magazinul nu este non-stop:";
		i >> obj.esteNonStop;
		cout << "Introduceti nr de angajati:";
		i >> obj.nrAngajati;
		cout << "Introduceti suprafata:";
		i >> obj.suprafataMagazinMP;

		cout << "Introduceti numele proprietarului:";
		char aux[100];
		i >> aux;
		obj.numeProprietar = new char[strlen(aux) + 1];
		strcpy(obj.numeProprietar, aux);

		cout << "Introduceti nr de produse:";
		i >> obj.nrProduse;

		obj.preturiProduse = new float[obj.nrProduse];
		obj.denumiriProduse = new string[obj.nrProduse];
		cout << "Introduceti preturile si denumirile produselor:";
		for (int j = 0; j < obj.nrProduse; j++)
		{
			cout << "Pret:";
			i >> obj.preturiProduse[j];
			cout << "Denumire:";
			i >> obj.denumiriProduse[j];
		}
		return i;
	}

	string operator[](int pozitieDorita)
	{
		if (pozitieDorita >= 0 && pozitieDorita < this->nrProduse)
		{
			return this->denumiriProduse[pozitieDorita];
		}
		else
		{
			return "Pozitie eronata";
		}
	}

	int operator()(float prag)
	{
		int contor = 0;
		for (int i = 0; i < this->nrProduse; i++)
		{
			if (this->preturiProduse[i] > prag)
			{
				contor++; 
			}
		}
		return contor;
	}

	friend void operator!(Magazin& obj)
	{
		if (obj.esteNonStop == 1)
		{
			obj.esteNonStop = 0;
		}
		else
		{
			obj.esteNonStop = 1;
		}
	}

	Magazin& operator+=(float pretProdusNou)
	{
		Magazin copie(*this); 

		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		this->nrProduse++; 

		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		for (int i = 0; i < copie.nrProduse; i++)
		{
			this->preturiProduse[i] = copie.preturiProduse[i];
			this->denumiriProduse[i] = copie.denumiriProduse[i];
		}

		this->preturiProduse[this->nrProduse - 1] = pretProdusNou;
		this->denumiriProduse[this->nrProduse - 1] = "Necunoscuta";

		return *this;
	}

	Magazin& operator-=(float pretCautat)
	{
		Magazin copie(*this);

		if (this->preturiProduse != NULL)
		{
			delete[] this->preturiProduse;
		}
		if (this->denumiriProduse != NULL)
		{
			delete[] this->denumiriProduse;
		}

		int nr = 0;
		for (int i = 0; i < copie.nrProduse; i++)
		{
			if (copie.preturiProduse[i] == pretCautat)
			{
				nr++;
			}
		}

		this->nrProduse = this->nrProduse - nr;

		this->preturiProduse = new float[this->nrProduse];
		this->denumiriProduse = new string[this->nrProduse];

		int poz = 0;
		for (int i = 0; i < copie.nrProduse; i++)
		{
			if (copie.preturiProduse[i] != pretCautat)
			{
				this->preturiProduse[poz] = copie.preturiProduse[i];
				this->denumiriProduse[poz] = copie.denumiriProduse[i];
				poz++;
			}
		}

		return *this;
	}

	Magazin& operator++()
	{
		this->nrAngajati++;
		return *this;
	}

	Magazin operator++(int)
	{
		Magazin copie = *this;
		this->nrAngajati++;
		return copie;
	}

	operator float()
	{
		float TVA = 0.24;
		float sumaTotalaTVA = 0;
		for (int i = 0; i < this->nrProduse; i++)
		{
			sumaTotalaTVA = sumaTotalaTVA + TVA * this->preturiProduse[i];
		}
		return sumaTotalaTVA;
	}

	operator string()
	{
		float pretMax;
		pretMax = this->preturiProduse[0];
		int contor = 0;
		for (int i = 1; i < this->nrProduse; i++)
		{
			if (this->preturiProduse[i] > pretMax)
			{
				pretMax = this->preturiProduse[i];
				contor = i;
			}
		}
		return this->denumiriProduse[contor];
	}

	};

int Magazin::clasaCaenPrincipala = 15;


class Mall {
	string denumireMall;
	int nrMagazine;
	Magazin* vectorMagazine;

public:
	Mall() {
		this->denumireMall = "Necunoscut";
		this->nrMagazine = 0;
		this->vectorMagazine = NULL;
	}
	Mall(string denumireMall, int nrMagazine, Magazin* vectorMagazine) {
		this->denumireMall = denumireMall;
		this->nrMagazine = nrMagazine;
		this->vectorMagazine = new Magazin[this->nrMagazine];
		for (int i = 0; i < this->nrMagazine; i++) {
			this->vectorMagazine[i] = vectorMagazine[i];
		}
	}
	string getDenumireMall() {
		return this->denumireMall;
	}
	int getNrMagazine() {
		return this->nrMagazine;
	}
	Magazin* getVectorMagazine() {
		return this->vectorMagazine;
	}
	void setDenumireMall(string denumireMallNoua) {
		this->denumireMall = denumireMallNoua;
	}

	void setMagazine(int nrMagazineNou,Magazin* vectorMagazineNou) {
		if (vectorMagazine != NULL) {
			delete[] this->vectorMagazine;
		}
		this->nrMagazine = nrMagazineNou;
		this->vectorMagazine = new Magazin [this->nrMagazine];
		for (int i = 0; i < this->nrMagazine; i++) {
			this->vectorMagazine[i] = vectorMagazineNou[i];
		}
	}
	~Mall() {
		if (this->vectorMagazine != NULL)
		{
			delete[] this->vectorMagazine;
		}
	}
};

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

	Magazin m6("Padndora", 45, 78.5);
	cout << m6.getDenumireMagazin() << endl;
	cout << m6.getNrAngajati() << endl;
	cout << m6.getSuprafataMagazinMP() << endl;
	cout << m6.getEsteNonStop() << endl;
	cout << m6.getCUI() << endl;
	cout << m6.getNumeProprietar() << endl;
	cout << m6.getNrProduse() << endl;
	cout << "Produse:" << endl;
	for (int i = 0; i < m6.getNrProduse(); i++)
	{
		cout << "Pret:" << m6.getPreturiProduse()[i] << " ; " << "Denumire:" << m6.getDenumiriProduse()[i] << endl;
	}
	cout << endl << endl;

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

		cout << "Constructor copiere:" << endl;
		Magazin m8(m1);
		cout << "Magazin 1:" << endl;
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

		cout << "Magazin nou 8:" << endl;
		cout << m8.getDenumireMagazin() << endl;
		cout << m8.getNrAngajati() << endl;
		cout << m8.getSuprafataMagazinMP() << endl;
		cout << m8.getEsteNonStop() << endl;
		cout << m8.getCUI() << endl;
		cout << m8.getNumeProprietar() << endl;
		cout << m8.getNrProduse() << endl;
		for (int i = 0; i < m8.getNrProduse(); i++)
		{
			cout << m8.getPreturiProduse()[i] << " ; " << m8.getDenumiriProduse()[i] << endl;
		}
		cout << endl;

		cout << "Operator =:" << endl;
		cout << "Magazin 4 inainte de a fi modificat:" << endl;
		cout << m4.getDenumireMagazin() << endl;
		cout << m4.getNrAngajati() << endl;
		cout << m4.getSuprafataMagazinMP() << endl;
		cout << m4.getEsteNonStop() << endl;
		cout << m4.getCUI() << endl;
		cout << m4.getNumeProprietar() << endl;
		cout << m4.getNrProduse() << endl;
		for (int i = 0; i < m4.getNrProduse(); i++)
		{
			cout << m4.getPreturiProduse()[i] << " ; " << m4.getDenumiriProduse()[i] << endl;
		}
		cout << endl << endl;

		m4 = m1;

		cout << "Magazin 4 dupa ce a fost modificat:" << endl;
		cout << m4.getDenumireMagazin() << endl;
		cout << m4.getNrAngajati() << endl;
		cout << m4.getSuprafataMagazinMP() << endl;
		cout << m4.getEsteNonStop() << endl;
		cout << m4.getCUI() << endl;
		cout << m4.getNumeProprietar() << endl;
		cout << m4.getNrProduse() << endl;
		for (int i = 0; i < m4.getNrProduse(); i++)
		{
			cout << m4.getPreturiProduse()[i] << " ; " << m4.getDenumiriProduse()[i] << endl;
		}
		cout << endl << endl;


		cout << m1.getNrProduse() << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < m1.getNrProduse(); i++)
		{
			cout << "Pret:" << m1.getPreturiProduse()[i] << " ; " << "Denumire:" << m1.getDenumiriProduse()[i] << endl;
		}
		cout << endl;

		cout << "Pretul minim din magazinul m1 este:" << m1.pretMinim() << endl;
		cout << "Pretul maxim din magazinul m1 este:" << m1.pretMaxim() << endl;
		cout << "Suma preturi din magazinul m1 sunt:" << m1.sumaPreturi() << endl;
		cout << "Pretul mediu din magazinul m1 este:" << m1.pretMediu() << endl;
		cout << endl << endl;

		cout << "Obiectul m1 inainte de apelarea metodei adauga:" << endl;
		cout << m1.getDenumireMagazin() << endl;
		cout << m1.getNrAngajati() << endl;
		cout << m1.getSuprafataMagazinMP() << endl;
		cout << m1.getEsteNonStop() << endl;
		cout << m1.getCUI() << endl;
		cout << m1.getNumeProprietar() << endl;
		cout << m1.getNrProduse() << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < m1.getNrProduse(); i++)
		{
			cout << "Pret:" << m1.getPreturiProduse()[i] << " ; " << "Denumire:" << m1.getDenumiriProduse()[i] << endl;
		}
		cout << endl;

		m1.aplicareDiscount(0.2, 20);
		cout << m1.getNrProduse() << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < m1.getNrProduse(); i++)
		{
			cout << "Pret:" << m1.getPreturiProduse()[i] << " ; " << "Denumire:" << m1.getDenumiriProduse()[i] << endl;
		}
		cout << endl << endl;

		m1.adaugaProdusNou(12.3, "Orez");

		cout << "Obiectul m1 dupa apelarea metodei adauga:" << endl;
		cout << m1.getDenumireMagazin() << endl;
		cout << m1.getNrAngajati() << endl;
		cout << m1.getSuprafataMagazinMP() << endl;
		cout << m1.getEsteNonStop() << endl;
		cout << m1.getCUI() << endl;
		cout << m1.getNumeProprietar() << endl;
		cout << m1.getNrProduse() << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < m1.getNrProduse(); i++)
		{
			cout << "Pret:" << m1.getPreturiProduse()[i] << " ; " << "Denumire:" << m1.getDenumiriProduse()[i] << endl;
		}
		cout << endl << endl;


		cout << "Obiectul m1 inainte de apelarea metodei elimina dupa pozitie:" << endl;
		cout << m1.getDenumireMagazin() << endl;
		cout << m1.getNrAngajati() << endl;
		cout << m1.getSuprafataMagazinMP() << endl;
		cout << m1.getEsteNonStop() << endl;
		cout << m1.getCUI() << endl;
		cout << m1.getNumeProprietar() << endl;
		cout << m1.getNrProduse() << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < m1.getNrProduse(); i++)
		{
			cout << "Pret:" << m1.getPreturiProduse()[i] << " ; " << "Denumire:" << m1.getDenumiriProduse()[i] << endl;
		}
		cout << endl << endl;

		m1.eliminaProdusPozitie(2);

		cout << "Obiectul m1 dupa apelarea metodei elimina dupa pozitie:" << endl;
		cout << m1.getDenumireMagazin() << endl;
		cout << m1.getNrAngajati() << endl;
		cout << m1.getSuprafataMagazinMP() << endl;
		cout << m1.getEsteNonStop() << endl;
		cout << m1.getCUI() << endl;
		cout << m1.getNumeProprietar() << endl;
		cout << m1.getNrProduse() << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < m1.getNrProduse(); i++)
		{
			cout << "Pret:" << m1.getPreturiProduse()[i] << " ; " << "Denumire:" << m1.getDenumiriProduse()[i] << endl;
		}
		cout << endl << endl;

		cout << "Obiectul m1 inainte de apelarea metodei elimina dupa valoare:" << endl;
		cout << m1.getDenumireMagazin() << endl;
		cout << m1.getNrAngajati() << endl;
		cout << m1.getSuprafataMagazinMP() << endl;
		cout << m1.getEsteNonStop() << endl;
		cout << m1.getCUI() << endl;
		cout << m1.getNumeProprietar() << endl;
		cout << m1.getNrProduse() << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < m1.getNrProduse(); i++)
		{
			cout << "Pret:" << m1.getPreturiProduse()[i] << " ; " << "Denumire:" << m1.getDenumiriProduse()[i] << endl;
		}
		cout << endl << endl;

		m1.eliminaProdusValore(10.2);

		cout << "Obiectul m1 dupa apelarea metodei elimina dupa valoare:" << endl;
		cout << m1.getDenumireMagazin() << endl;
		cout << m1.getNrAngajati() << endl;
		cout << m1.getSuprafataMagazinMP() << endl;
		cout << m1.getEsteNonStop() << endl;
		cout << m1.getCUI() << endl;
		cout << m1.getNumeProprietar() << endl;
		cout << m1.getNrProduse() << endl;
		cout << "Produse:" << endl;
		for (int i = 0; i < m1.getNrProduse(); i++)
		{
			cout << "Pret:" << m1.getPreturiProduse()[i] << " ; " << "Denumire:" << m1.getDenumiriProduse()[i] << endl;
		}
		cout << endl << endl;

		cout << "Suprafata m1:" << m1.getSuprafataMagazinMP() << endl;
		cout << "Suprafata m2:" << m2.getSuprafataMagazinMP() << endl;
		cout << "Suprafata magazinului 1 este <= suprafata magazinului 2? (1 - DA ; 0 - NU):" << (m1 <= m2) << endl;

		if (m1 <= m2)
		{
			cout << "Suprafata magazinului 1 este <= suprafata magazinului 2";
		}
		else
		{
			cout << "Suprafata magazinului 1 este >= suprafata magazinului 2";
		}

		cout << endl << endl << "OPERATORUL<<" << endl << endl;
		cout << m1 << endl;
		cout << m2 << endl;
		cout << m3 << endl;


		cout << endl << "OPERATORUL>>" << endl;
		cin >> m1;
		cout << endl << m1 << endl;


		cout << endl << "OPERATORUL []" << endl;
		cout << "Denumirea produsului cu indexul 2 din magazinul 2 este:" << m2[2] << endl;
		cout << "Denumirea produsului cu indexul 2 din magazinul 2 este:" << m2[20] << endl;

		cout << endl << "OPERATORUL ()" << endl;
		cout << m3 << endl;
		cout << "In magazinul 3 avem: " << m3(15) << "Produse cu pretul mai mare de 15 de lei" << endl;

		cout << endl << endl << "OPERATORUL !" << endl << endl;
		cout << "Obiectul m1 este non-stop? (1-DA/ 0-NU)" << m1.getEsteNonStop() << endl;
		!m1;
		cout << "Obiectul m1 este non-stop? (1-DA/ 0-NU)" << m1.getEsteNonStop() << endl;

		cout << endl << endl << "OPERATORUL +=" << endl << endl;
		cout << "M3 inainte de apelul operatorului +=:" << endl;
		cout << m3 << endl << endl;
		m3 += 23.7;
		cout << "M3 dupa apelul operatorului +=:" << endl;
		cout << m3 << endl << endl;

		cout << endl << endl << "OPERATORUL -=" << endl << endl;
		cout << "M3 inainte de apelul operatorului -=:" << endl;
		cout << m3 << endl << endl;
		m3 -= 123.5;
		cout << "M3 dupa apelul operatorului -=:" << endl;
		cout << m3 << endl << endl;

		cout << endl << endl << "OPERATORUL ++ preincrementare" << endl << endl;
		cout << "Nr anagjati m1:" << m1.getNrAngajati() << endl;
		cout << "Nr anagjati m3:" << m3.getNrAngajati() << endl;
		m1 = ++m3;
		cout << "Nr anagjati m1:" << m1.getNrAngajati() << endl;
		cout << "Nr anagjati m3:" << m3.getNrAngajati() << endl;

		cout << endl << "OPERATORUL ++ postincrementare" << endl;
		cout << "Nr anagjati m2:" << m2.getNrAngajati() << endl;
		cout << "Nr anagjati m4:" << m4.getNrAngajati() << endl;
		m2 = m4++;
		cout << "Nr anagjati m2:" << m2.getNrAngajati() << endl;
		cout << "Nr anagjati m4:" << m4.getNrAngajati() << endl;

		cout << endl << "OPERATORUL DE CAST LA FLOAT" << endl;
		cout << m1 << endl << endl;

		cout << "Suma valorii TVA pentru produsele din magazinul 1 este:" << (float)m1 << endl;

		cout << endl << "OPERATORUL DE CAST LA STRING" << endl;
		cout << "Produsul cel mai scump din magazinul 1 este:" << (string)m1 << endl;


		Mall mall1;
		cout << mall1.getDenumireMall() << endl;
		cout << mall1.getNrMagazine() << endl;
		cout << "Magazinele din Mall sunt:" << endl;
		for (int i = 0; i < mall1.getNrMagazine(); i++)
		{
			cout << mall1.getVectorMagazine()[i] << endl << endl;
		}

		Magazin vectorMagazine1[] = { m1,m2,m3 };
		Mall mall2("MegaMall", 3, vectorMagazine1);
		cout << mall2.getDenumireMall() << endl;
		cout << mall2.getNrMagazine() << endl;
		cout << "Magazinele din Mall sunt:" << endl ;
		for (int i = 0; i < mall2.getNrMagazine(); i++)
		{
			cout << mall2.getVectorMagazine()[i] << endl << endl;
		}

		cout << "-SETTERI-" << endl;
		mall1.setDenumireMall("AFI");
		Magazin vectorMagazine2[] = { m1,m4,m5};
		mall1.setMagazine(3, vectorMagazine2);

		cout << mall1.getDenumireMall() << endl;
		cout << mall1.getNrMagazine() << endl;
		cout << "Magazinele din Mall sunt:" << endl;
		for (int i = 0; i < mall1.getNrMagazine(); i++)
		{
			cout << mall1.getVectorMagazine()[i] << endl << endl;
		}

}

