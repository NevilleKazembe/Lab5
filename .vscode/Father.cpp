#include <iostream>
#include "Mother.h"
#include "Daughter.h"
#include "Son.h"
using namespace std;

int main() {
    Mother m1;          // Calls Mother default constructor
    Mother m2(10);      // Calls Mother(int) constructor

    Daughter d1;        // Calls Daughter default constructor
    Daughter d2(20);    // Calls Daughter(int) constructor

    Son s1;             // Calls Son default constructor
    Son s2(30);         // Calls Son(int) constructor

    return 0;
}
