#include "Service.h"
Service::Service() {
	this->r.setSize(0);
}
Service::~Service() {
	this->r.setSize(-1);
}
void Service::AddProdusService(char* n, char* d, int p) 
{
	Produs prod(n, d, p);
	r.addProdus(prod);
}

int Service::getSizeService() {
	return this->r.getSize();
}

Produs* Service::getAll() {
	return this->r.getall();
}

void Service::StergereProdusService(Produs& p) {
	this->r.stergere(p);
}

void Service::ModificareProdusService(Produs& p) {
	for (int i = 0;i < Service::getSizeService();i++)
		if (strcmp(getAll()[i].getNume(), p.getNume()) == 0)
			r.modificare(p);

}