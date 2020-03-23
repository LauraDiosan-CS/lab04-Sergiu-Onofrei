#include "Service.h"
Service::Service() {
	this->r.setSize(0);
}
Service::~Service() {
	this->r.setSize(-1);
}
void Service::AddProdus(char* n, char* d, int p) 
{
	Produs prod(n, d, p);
	r.addProdus(prod);
}

int Service::getSize() {
	return this->r.getSize();
}

Produs* Service::getAll() {
	return this->r.getall();
}

void Service::StergereProdus(Produs& p) {
	this->r.stergere(p);
}

void Service::ModificareProdus(Produs& p) {
	this->r.modificare(p);
}