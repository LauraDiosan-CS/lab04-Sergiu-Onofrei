#include "Repo.h"
Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
	this->n = -1;
}

void Repo::addProdus(Produs g) {
	this->produse[this->n++] = g;
}

Produs* Repo::getall() {
	return this->produse;
}
int	Repo::getSize() {
	return this->n;
}

void Repo::setSize(int newn) {
	this->n = newn;
}

int Repo::cautare(const Produs& p) {
	for (int i = 0;i < n;i++)
		if (produse[i] == p) 
			return i;
	return -1;
}

void Repo::stergere(const Produs& p)
{
	for(int i= 0;i<n;i++)
		if(produse[i] == p)
		{
			produse[i] = produse[n - 1];
			n--;
			break;
		}
}

void Repo::modificare(Produs& p) {
	for (int i = 0;i <this->n;i++)
		if (strcmp(this->produse[i].getNume(), p.getNume()) == 0)
			this->produse[i] = p;
}