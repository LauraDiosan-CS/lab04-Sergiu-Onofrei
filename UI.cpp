#include "UI.h"
#include <iostream>
using namespace std;
void UI::AddProdus(char* nume, char* date, int x) {
    this->s.AddProdus(nume, date, x);
}
void UI::StergereProdus(char* nume1, char* date1, int x1) {
    Produs p1(nume1, date1, x1);
    this->s.StergereProdus(p1);
}
void UI::ModificareProdus(char* nume, char* date, int x) {
    Produs p1(nume, date, x);
    this->s.ModificareProdus(p1);
}
void UI::reducere(char* data) {
    this->s.reducere(data);
}

void UI::Meniu(){
    int optiune;
    char* nume1 = new char[50];
    char* date1 = new char[50];
    char* nume = new char[50];
    char* date2 = new char[50];
    char* nume2 = new char[50];
    char* date = new char[50];
    char* date3 = new char[50];
    Produs *prod = new Produs[50];
    int x, x1,x2,p,m;
    m = 0;
    bool val = true;
    do
    {
        cout << "Dati o optiune:\n0-Iesire\n1-Citire\n2-Afisare\n3-Stergere\n4-Modificare(dupa nume)\n5-Produse cu pretul mai mare";
        cout << endl;
        cout << "6-Reducere cu 10% a produselor cu o data anterioara: ";
        cin >> optiune;
        switch (optiune) {
        case 1: {
            cout << "Dati un nume de produs: ";
            cin >> nume;
            date = exceptiedata();
            cout << "Dati un pret pentru produs: ";
            cin >> x;
            AddProdus(nume, date, x);
            break;}
        case 2: {
            cout << endl;
            cout << "Produsele sunt: " << endl;
            for (int i = 0; i < this->s.getSize();i++) {
                cout << " " << this->s.getAll()[i];
            };break;}
        case 3: {
            cout << "Dati un produs de sters: " << endl;
            cout << "Dati un nume de produs: ";
            cin >> nume1;
            date1 = exceptiedata();
            cout << "Dati un pret pentru produs: ";
            cin >> x1;
            StergereProdus(nume1, date1, x1);
            break;
        }
        case 4: {
            cout << "Dati un produs de modificat(Dupa nume): " << endl;
            cout << "Dati un nume de produs: ";
            cin >> nume2;
            date2 = exceptiedata();
            cout << "Dati un pret pentru produs: ";
            cin >> x2;
            ModificareProdus(nume2, date2, x2);
            break;
        }
        case 5: {
            cout << "Dati un pret: ";
            cin >> p;
            this->s.PretProdus(p, prod, m);
            for (int i = 0;i < m;i++) 
                cout <<" " << prod[i];
            m = 0;
            break;
        }
        case 6: {
            cout << "Dati o data: ";
            date3 = exceptiedata();
            reducere(date3);
            break;
        }
        case 0: {val = false;break;}
        }
        cout << endl;
    } while (val);
    delete[] prod;
}