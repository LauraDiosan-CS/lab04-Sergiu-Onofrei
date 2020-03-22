#include "Test.h"
#include <assert.h>
#include "Repo.h"
#include "Produs.h"
#include <iostream>
#include <string.h>
#include "Service.h"
void test() {
	char* x = new char[50];
	strcpy_s(x, strlen("11/01/2600") + 1, "11/01/2600");
	assert(validaredata(x) == 1);
	int x1 = 15;
	int y = 33;
	Produs l = Produs();
	char* m = new char[20];
	char* i = new char[20];
	char* u = new char[20];
	char* v = new char[20];
	strcpy_s(i, strlen("paracetamol") + 1, "paracetamol");
	strcpy_s(u, strlen("Teo") + 1, "Teo");
	strcpy_s(v, strlen("11/01/2000") + 1, "11/01/2000");
	strcpy_s(m, strlen("21/10/2990") + 1, "21/10/2990");
	assert(l.getPret() == 0);
	assert(l.getNume() == NULL);
	assert(l.getData() == NULL);
	Produs p1 = Produs(u,v,x1);
	assert(p1.getPret() == x1);
	p1.setPret(y);
	assert(p1.getPret() == y);
	assert(strcmp(p1.getData(), "11/01/2000") == 0);
	assert(strcmp(p1.getNume(), "Teo") == 0);
	p1.setNume(i);
	assert(strcmp(p1.getNume(), "paracetamol") == 0);
	p1.setData(m);
	assert(strcmp(p1.getData(), "21/10/2990") == 0);
}

void testRepo() {
	char* i = new char[20];
	char* u = new char[20];
	char* v = new char[20];
	strcpy_s(i, strlen("paracetamol") + 1, "paracetamol");
	strcpy_s(u, strlen("Teo") + 1, "Teo");
	strcpy_s(v, strlen("11/01/2000") + 1, "11/01/2000");
	Repo r = Repo();
	Produs prod[3];
	assert(r.getSize() == 0);
	Produs p1(u,v,45);
	prod[0] = p1;
	Produs p2(i,v,67);
	prod[1] = p2;
	r.addProdus(p1);
	assert(r.getSize() == 1);
	r.addProdus(p2);
	assert(r.getSize() == 2);
	assert(r.getall()[0] == prod[0]);
	assert(r.getall()[1] == prod[1]);
	r.stergere(p2);
	assert(r.getall()[0] == prod[0]);
	assert(r.getSize() == 1);
	r.stergere(p1);
	assert(r.getSize() == 0);
	
}

void testService() {
	char* i = new char[20];
	char* u = new char[20];
	char* v = new char[20];
	char* o = new char[20];
	char* k = new char[20];
	strcpy_s(i, strlen("paracetamol") + 1, "paracetamol");
	strcpy_s(u, strlen("Teo") + 1, "Teo");
	strcpy_s(v, strlen("11/01/2000") + 1, "11/01/2000");
	strcpy_s(o, strlen("13/11/1800") + 1, "13/11/1800");
	Repo r = Repo();
	Service s;
	Produs prod[5];
	s.AddProdusService(i, v, 33);
	Produs p1(i, v, 33);
	prod[0] = p1;
	Produs p3(i, o, 24);
	Produs p2(u, v, 55);
	prod[1] = p2;
	assert(s.getSizeService() == 1);
	assert(s.getAll()[0] == prod[0]);
	s.AddProdusService(u, v, 55);
	assert(s.getSizeService() == 2);
	assert(s.getAll()[1] == prod[1]);
	s.ModificareProdusService(p3);
	assert(s.getAll()[0].getPret() == 24);
	assert(strcmp(s.getAll()[0].getData(), "13/11/1800") == 0);
	s.StergereProdusService(p3);
	assert(s.getSizeService() == 1);
	assert(s.getAll()[0] == prod[1]);
	s.StergereProdusService(p2);
	assert(s.getSizeService() == 0);
	cout << "done" << endl;
}
