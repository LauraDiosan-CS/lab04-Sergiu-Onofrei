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
	void setSize(int newn);
	void addProdus(Produs p);
	Produs* getall();
	void stergere(const Produs& p);
	int cautare(const Produs& p);
	void modificare(Produs& p);
};
