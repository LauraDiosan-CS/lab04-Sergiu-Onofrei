#include "Test.h"
#include "Repo.h"
#include <iostream>
#include "Service.h"
using namespace std;
int main()
{   
    test();
    testRepo();
    testService();
    int x,x1;
    bool val = true;
    int optiune;
    Produs prod[100];
    Produs p;
    char* nume1 = new char[50];
    char* date1 = new char[50];
    char* nume = new char[50];
    char* date = new char[50];
    Repo r;
    Service s;
    do
    {
        cout << "Dati o optiune:\n0-Iesire\n1-Citire\n2-Afisare\n3-Stergere\n4-Modificare(dupa nume): ";
        cin >> optiune;
        switch (optiune) {
        case 1: {
            cout << "Dati un nume de produs: ";
            cin >> nume;
            date = exceptiedata();
            cout << "Dati un pret pentru produs: ";
            cin >> x;
            s.AddProdus(nume, date, x);
            break;}
        case 2: {
            cout << endl;
            cout << "Produsele sunt: " << endl;
            for (int i = 0; i < s.getSize();i++) {
                cout <<" "<<s.getAll()[i];
            };break;}
        case 3: {
            cout << "Dati un produs de sters: "<<endl;
            cout << "Dati un nume de produs: ";
            cin >> nume1;
            date1 = exceptiedata();
            cout << "Dati un pret pentru produs: ";
            cin >> x1;
            Produs p1(nume1, date1, x1);
            s.StergereProdus(p1);
            break;
        }
        case 4: {
            cout << "Dati un produs de modificat(Dupa nume): " << endl;
            cout << "Dati un nume de produs: ";
            cin >> nume1;
            date1 = exceptiedata();
            cout << "Dati un pret pentru produs: ";
            cin >> x1;
            Produs p1(nume1, date1, x1);
            s.ModificareProdus(p1);break;
        }
        case 0: {val = false;break;}
        }
        cout << endl;
    } while (val);
    return 0;
}


