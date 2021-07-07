#pragma once
#include "Service.h"
class UI {
private:
	Service s;
public:
	void AddProdus(char* nume, char* date, int x);
	void StergereProdus(char* nume, char* date, int x);
	void ModificareProdus(char* nume, char* date, int x);
	void Meniu();
	void PretProduse(int x,Produs *v, int &n);
	void reducere(char* data);
};
