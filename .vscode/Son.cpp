#include "Son.h"
#include <iostream>
using namespace std;

Son::Son() {
    cout << "Son: no parameters" << endl;
}

Son::Son(int a) : Mother(a) {
    cout << "Son: int parameter" << endl;
}
