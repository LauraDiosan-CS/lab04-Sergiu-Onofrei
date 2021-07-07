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
	s.AddProdus(i, v, 33);
	Produs p1(i, v, 33);
	prod[0] = p1;
	Produs p3(i, o, 24);
	Produs p2(u, v, 55);
	prod[1] = p2;
	assert(s.getSize() == 1);
	assert(s.getAll()[0] == prod[0]);
	s.AddProdus(u, v, 55);
	assert(s.getSize() == 2);
	assert(s.getAll()[1] == prod[1]);
	s.ModificareProdus(p3);
	assert(s.getAll()[0].getPret() == 24);
	assert(strcmp(s.getAll()[0].getData(), "13/11/1800") == 0);
	s.StergereProdus(p3);
	assert(s.getSize() == 1);
	assert(s.getAll()[0] == prod[1]);
	s.StergereProdus(p2);
	assert(s.getSize() == 0);
}

void testFunctionalitati(){
	Service s;
	char* i = new char[20];
	char* u = new char[20];
	char* v = new char[20];
	char* o = new char[20];
	char* l = new char[20];
	char* m = new char[20];
	int n = 0;
	Produs* p = new Produs[40];
	strcpy_s(i, strlen("paracetamol") + 1, "paracetamol");
	strcpy_s(u, strlen("Teo") + 1, "Teo");
	strcpy_s(v, strlen("11/01/2000") + 1, "11/01/2000");
	strcpy_s(o, strlen("13/11/1800") + 1, "13/11/1800");
	strcpy_s(l, strlen("Teo") + 1, "Teo");
	strcpy_s(m, strlen("11/01/2000") + 1, "11/01/2000");
	Produs p1(i, v, 33);
	Produs produse[4];
	produse[0] = p1;
	Produs p2(u, o, 11);
	produse[1] = p2;
	Produs p3(l, m, 24);
	produse[2] = p3;
	s.AddProdus(i, v, 33);
	s.AddProdus(u, o, 11);
	s.AddProdus(l, m, 24);
	assert(s.getSize() == 3);
	s.PretProdus(23, p, n);
	assert(n == 2);
	n = 0;
	s.PretProdus(10, p, n);
	assert(n == 3);
	assert(p[0] == produse[0]);
	assert(p[1] == produse[1]);
	n = 0;
	s.PretProdus(35, p, n);
	assert(n == 0);
	n = 0;
	s.PretProdus(30, p, n);
	assert(n == 1);
	assert(p[0] == produse[0]);
}
void testReducere() {
	char* v = new char[20];
	char* o = new char[20];
	char* i = new char[20];
	char* m = new char[20];
	char* m1 = new char[20];
	char* m2 = new char[20];
	char* l = new char[20];
	Service s;
	strcpy_s(m, strlen("08/08/2002") + 1, "08/08/2002");
	strcpy_s(m1, strlen("12/12/1800") + 1, "12/12/1800");
	strcpy_s(m2, strlen("13/11/1800") + 1, "13/11/1800");
	strcpy_s(v, strlen("11/01/2000") + 1, "11/01/2000");
	strcpy_s(o, strlen("13/11/1800") + 1, "13/11/1800");
	strcpy_s(l, strlen("Teo") + 1, "Teo");
	strcpy_s(i, strlen("paracetamol") + 1, "paracetamol");
	s.AddProdus(i, o, 44);
	s.AddProdus(l, v, 100);
	Produs p(i, o, 44);
	Produs p1(l, v, 100);
	assert(s.proprietateData(m, p) == 1);
	assert(s.proprietateData(m, p1) == 1);
	assert(s.proprietateData(m1, p) == 1);
	assert(s.proprietateData(m1, p1) == 0);
	assert(s.proprietateData(m2, p) == 0);
}