#include "Test.h"
#include "Repo.h"
#include <iostream>
#include "UI.h"
using namespace std;
int main()
{
    testFunctionalitati();
    testReducere();
    test();
    testRepo();
    testService();
    Produs p;
    Repo r;
    Service s;
    UI u;
    u.Meniu();
    return 0;
}


