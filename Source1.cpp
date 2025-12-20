#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Carte {
    string titlu;
    string autor;
    int an;
    float pret;

public:
    Carte() : titlu(""), autor(""), an(0), pret(0) {}
    Carte(string titlu, string autor, int an, float pret)
        : titlu(titlu), autor(autor), an(an), pret(pret) {}

    void afisare() const {
        cout << "Titlu: " << titlu
            << " | Autor: " << autor
            << " | An: " << an
            << " | Pret: " << pret << "\n";
    }

    void scrieInFisier(ofstream& fout) const {
        fout << titlu << "\n";
        fout << autor << "\n";
        fout << an << "\n";
        fout << pret << "\n";
        fout << "---\n"; 
    }

    bool citesteDinFisier(ifstream& fin) {
        if (!getline(fin, titlu)) return false;   
        if (titlu.empty() && fin.eof()) return false;

        if (!getline(fin, autor)) return false;

        string linie;
        if (!getline(fin, linie)) return false;
        an = stoi(linie);

        if (!getline(fin, linie)) return false;
        pret = stof(linie);

        getline(fin, linie);

        return true;
    }
};

void scrieCarti(const string& numeFisier, const vector<Carte>& carti) {
    ofstream fout(numeFisier);
    if (!fout.is_open()) {
        cout << "Nu pot deschide fisierul pentru scriere.\n";
        return;
    }

    for (const auto& c : carti) {
        c.scrieInFisier(fout);
    }

    fout.close();
}

vector<Carte> citesteCarti(const string& numeFisier) {
    ifstream fin(numeFisier);
    vector<Carte> carti;

    if (!fin.is_open()) {
        cout << "Nu pot deschide fisierul pentru citire.\n";
        return carti;
    }

    Carte c;
    while (c.citesteDinFisier(fin)) {
        carti.push_back(c);
    }

    fin.close();
    return carti;
}

int main() {
    vector<Carte> carti = {
        Carte("Morometii", "Marin Preda", 1955, 39.99f),
        Carte("Ion", "Liviu Rebreanu", 1920, 29.50f),
        Carte("Enigma Otiliei", "George Calinescu", 1938, 34.00f)
    };

    scrieCarti("carti.txt", carti);

    vector<Carte> citite = citesteCarti("carti.txt");

    cout << "Carti citite din fisier:\n";
    for (const auto& c : citite) {
        c.afisare();
    }

    return 0;
}
