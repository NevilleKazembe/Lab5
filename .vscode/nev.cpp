#include <iostream>
#include "rec.h"
using namespace std;

int main() {
    rec rect;
    rect.SetValues(5, 10);   // width = 5, height = 10
    cout << "Area of rectangle: " << rect.Area() << endl;
    return 0;
}
