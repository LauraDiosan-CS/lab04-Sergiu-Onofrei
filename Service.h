#pragma once
#include "Repo.h"
class Service {
private:
	Repo r;
public:
	Service();
	Produs* getAll();
	int getSizeService();
	void AddProdusService(char* n, char* d, int p);
	void StergereProdusService(Produs& p);
	void ModificareProdusService(Produs& p);
	~Service();

};
