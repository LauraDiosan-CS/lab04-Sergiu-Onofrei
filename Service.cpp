#include "Service.h"
#include <iostream>
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
void Service::PretProdus(int x, Produs *v, int &n) {
	for (int i = 0;i < this->r.getSize();i++)
	{
		if (this->r.getall()[i].getPret() > x)
			v[n++] = this->r.getall()[i];
	}
}

int Service::proprietateData(char* data, Produs produs) {
	int ziua, luna,an,ziuacurent,lunacurent,ancurent;
	char* data1;
	ziua = (data[0] - '0') * 10 + (data[1] - '0');
	luna = (data[3] - '0') * 10 + (data[4] - '0');
	an = (data[6] - '0') * 1000 + (data[7] - '0') * 100 + (data[8] - '0') * 10 + (data[9] - '0');
	data1 = produs.getData();
	ziuacurent = (data1[0] - '0') * 10 + (data1[1] - '0');
	lunacurent = (data1[3] - '0') * 10 + (data1[4] - '0');
	ancurent = (data1[6] - '0') * 1000 + (data1[7] - '0') * 100 + (data1[8] - '0') * 10 + (data1[9] - '0');
	if (ancurent < an)
		return 1;
	if ((ancurent == an) && (lunacurent < luna))
		return 1;
	if ((ancurent == an) && (lunacurent == luna) && (ziuacurent < ziua))
		return 1;
	return 0;
}

void Service::reducere(char* data) {
	float red;
	for (int i = 0;i < this->r.getSize();i++)
	{
		if (proprietateData(data, this->r.getall()[i]) == 1)
		{
			red = this->r.getall()[i].getPret() * (1.0/10.0);
			this->r.getall()[i].setPret(this->r.getall()[i].getPret() - red);
		}
	}
}