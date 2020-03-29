#pragma once
#include "Repo.h"
class Service {
private:
	Repo r;
public:
	Produs* getAll();
	int getSize();
	void AddProdus(char* n, char* d, int p);
	void StergereProdus(Produs& p);
	void ModificareProdus(Produs& p);
	void PretProdus(int x, Produs *v, int &n);
	int proprietateData(char* data, Produs produs);
	void reducere(char* data);
};
