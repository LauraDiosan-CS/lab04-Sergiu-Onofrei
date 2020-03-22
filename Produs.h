#pragma once
#include <ostream>
using namespace std;
bool validaredata(char* data);
char* exceptiedata();
class Produs {
private:
	int pret;
	char* nume;
	char* data;
public:
	Produs();
	Produs(char* nume, char* data,int pret);
	Produs(const Produs& p);
	~Produs();
	int getPret();
	char* getNume();
	char* getData();
	void setNume(char* newNume);
	void setData(char* newData);
	void setPret(int newPret);
	bool operator==(const Produs& p);
	Produs& operator=(const Produs& p);
	friend ostream& operator<<(ostream& os, const Produs& g)
	{
		os << g.nume<<"  "<<g.data<<" " <<g.pret << " "<<endl;
		return os;
	}

};
