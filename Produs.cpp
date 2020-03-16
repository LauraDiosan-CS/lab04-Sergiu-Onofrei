#include "Produs.h"
Produs::Produs()
{
	this->pret = 0;
}
Produs::Produs(int pret)
{
	this->pret = pret;
}
Produs::Produs(const Produs& p)
{
	this->pret = p.pret;
}
Produs::~Produs(){
	this->pret = -1;
}
int Produs::getPret() {
	return this->pret;
}
void Produs::setPret(int newPret) {
	this->pret = newPret;
}

Produs& Produs::operator=(const Produs& p) {
	this->setPret(p.pret);
	return *this;
}
bool Produs::operator==(const Produs& p) {
	return this->pret == p.pret;
}