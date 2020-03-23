#pragma once
#include "Repo.h"
class Service {
private:
	Repo r;
public:
	Service();
	Produs* getAll();
	int getSize();
	void AddProdus(char* n, char* d, int p);
	void StergereProdus(Produs& p);
	void ModificareProdus(Produs& p);
	~Service();

};
