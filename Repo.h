#pragma once
#include "Produs.h"

class Repo {
private:
	Produs produse[20];
	int n;
public:
	Repo();
	~Repo();
	int getSize();
	void addProdus(Produs p);
	Produs* getall();

};
