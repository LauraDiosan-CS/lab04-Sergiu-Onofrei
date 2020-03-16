#include "Test.h"
#include <assert.h>
#include "Repo.h"
#include "Produs.h"
#include <iostream>
void test() {
	int x = 15;
	int y = 33;
	Produs p = Produs();
	assert(p.getPret() == 0);
	Produs p1 = Produs(x);
	assert(p1.getPret() == x);
	p1.setPret(y);
	assert(p1.getPret() == y);
	Produs p3(45);
	assert(p3.getPret() == 45);
	cout << y<<endl;
}

void testRepo() {
	Repo r = Repo();
	Produs prod[3];
	assert(r.getSize() == 0);
	Produs p1(45);
	prod[0] = p1;
	Produs p2(67);
	prod[1] = p2;
	r.addProdus(p1);
	assert(r.getSize() == 1);
	r.addProdus(p2);
	assert(r.getSize() == 2);
	assert(r.getall()[0] == prod[0]);
	assert(r.getall()[1] == prod[1]);
}