#include "Daughter.h"
#include <iostream>
using namespace std;

Daughter::Daughter() {
    cout << "Daughter: no parameters" << endl;
}

Daughter::Daughter(int a) : Mother(a) {
    cout << "Daughter: int parameter" << endl;
}
