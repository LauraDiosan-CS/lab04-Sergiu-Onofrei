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