#include "Test.h"
#include "Produs.h"
#include "Repo.h"
#include <iostream>
using namespace std;
int main()
{   
    //test();
    //testRepo();
    int x;
    bool val = true;
    int optiune;
    Produs prod[100];
    Produs p;
    char* nume = new char[50];
    char* date = new char[50];
    Repo r;
    do
    {
        cout << "Dati o optiune:\n0-Iesire\n1-Citire\n2-Afisare: ";
        cin >> optiune;
        switch (optiune) {
        case 1: {
            cout << "Dati un nume de produs: ";
            cin >> nume;
            date = exceptiedata();
            cout << "Dati un pret pentru produs: ";
            cin >> x;
            Produs p(nume, date, x);
            r.addProdus(p);
            break;}
        case 2: {
            cout << endl;
            cout << "Produsele sunt: " << endl;
            for (int i = 0; i < r.getSize();i++) {
                cout <<" "<<r.getall()[i];
            };break;}
        case 0: {val = false;break;}
        }
        cout << endl;
    } while (val);
    return 0;
}


