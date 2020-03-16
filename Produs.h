#pragma once
#include <ostream>
using namespace std;
class Produs {
private:
	int pret;
public:
	Produs();
	Produs(int pret);
	Produs(const Produs& p);
	~Produs();
	int getPret();
	void setPret(int newPret);
	bool operator==(const Produs& p);
	Produs& operator=(const Produs& p);
	friend ostream& operator<<(ostream& os, const Produs& g)
	{
		os << g.pret << " "<<endl;
		return os;
	}

};
