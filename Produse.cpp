#include "Test.h"
#include "Produs.h"
#include "Repo.h"
#include <iostream>
using namespace std;
int main()
{   
    test();
    testRepo();
    int x;
    bool val = true;
    int optiune;
    Produs prod[100];
    int n;
    Repo r;
    Produs g;
    do
    {
        cout << "Dati o optiune:0-Iesire\n1-Citire\n2-Afisare: ";
        cin >> optiune;
        switch (optiune) {
        case 1: {
            cout << "Dati numarul de produse: ";
            cin >> n;
            for (int i = 0;i < n;i++)
            {
                cout << "Dati un pret pentru produs: ";
                cin >> x;
                prod[i] = x;
                r.addProdus(x);
            }break;
        }
        case 2: {
            cout << endl;
            for (int i = 0; i < r.getSize();i++) {
                cout <<"Pretul este: "<< r.getall()[i];
            };break;}
        case 0: {val = false;break;}
        }
        cout << endl;
    } while (val);
    return 0;
}


