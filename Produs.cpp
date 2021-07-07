#include "Produs.h"
#include <string.h>
#include <iostream>
Produs::Produs()
{   
    this->data = NULL;
    this->nume = NULL;
	this->pret = 0;
}
Produs::Produs(char* nume, char* data,int pret)
{
	this->pret = pret;
    this->nume = new char[strlen(nume) + 1];
    strcpy_s(this->nume, strlen(nume) + 1, nume);
    this->data = new char[strlen(data) + 1];
    strcpy_s(this->data, strlen(data) + 1, data);
}
Produs::Produs(const Produs& p)
{
	this->pret = p.pret;
    this->nume = new char[strlen(p.nume) + 1];
    strcpy_s(this->nume, strlen(p.nume) + 1, p.nume);
    this->data = new char[strlen(p.data) + 1];
    strcpy_s(this->data, strlen(p.data) + 1, p.data);
    
}
Produs::~Produs(){
	this->pret = -1;
    if (this->nume != 0)
        delete[] this->nume;
    if (this->data != 0)
        delete[] this->data;
    this->nume = NULL;
    this->data = NULL;
}
int Produs::getPret() {
	return this->pret;
}
void Produs::setPret(int newPret) {
	this->pret = newPret;
}

char* Produs::getNume() {
    return this->nume;
}

char* Produs::getData() {
    return this->data;
}

void Produs::setNume(char* newNume)
{
    if (this->nume != 0)
        delete[] this->nume;
    this->nume = new char[strlen(newNume) + 1];
    strcpy_s(this->nume, strlen(newNume) + 1, newNume);
}

void Produs::setData(char* newData)
{
    if (this->data != 0)
        delete[] this->data;
    this->data = new char[strlen(newData) + 1];
    strcpy_s(this->data, strlen(newData) + 1, newData);
}

Produs& Produs::operator=(const Produs& p) {
	this->setPret(p.pret);
    this->setData(p.data);
    this->setNume(p.nume);
	return *this;
}
bool Produs::operator==(const Produs& p) {
	return this->pret == p.pret && strcmp(this->nume, p.nume) == 0 && strcmp(this->data, p.data) == 0;
}

bool validaredata(char* data) {
    int v[13],ok,ziua,luna;
    v[0] = 0;
    v[1] = 31;
    v[2] = 29;
    v[3] = 31;
    v[4] = 30;
    v[5] = 31;
    v[6] = 30;
    v[7] = 31;
    v[8] = 30;
    v[9] = 31;
    v[10] = 30;
    v[11] = 31;
    v[12] = 30;
    ok = 0;
    if (strlen(data) > 6)
    {
        if (('9' >= data[0]) && (data[0] >= '0') && ('9' >= data[1]) && (data[1] >= '0') && (data[2] == '/') && (data[5] == '/'))
        {
            ziua = (data[0] - '0') * 10 + (data[1] - '0');
            luna = (data[3] - '0') * 10 + (data[4] - '0');
        }
        else
            return false;
    }
    else
        return false;
    size_t k = 6;
    while (k < strlen(data))
    {
        if (data[k] == '/')
            return false;
        k ++ ;
    }
    if ((0 < luna) && (luna <= 12) && (v[luna] >= ziua) && (ziua > 0))
        ok++;
    if (ok == 1)
        return 1;
    else
        return 0;
}

char* exceptiedata()
{
    char* data = new char[50];
    char nume[50];
    int ok = 1;
    while (ok == 1)
    {
        cout << "Dati o data(zz/ll/aaaa): ";
        cin >> nume;
        strcpy_s(data, strlen(nume) + 1, nume);
        if (validaredata(data) == true)
        {
            ok = 0;
            return data;
        }
        else
            cout << "Eroare dati o data corecta(zz/ll/aaaa) ";
    }
}