#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // First rectangle using default constructor
    Rectangle rect1;
    float l1, w1;
    cout << "Enter length for first rectangle: ";
    cin >> l1;
    cout << "Enter width for first rectangle: ";
    cin >> w1;

    rect1.setLength(l1);
    rect1.setWidth(w1);

    cout << "Area of first rectangle: " << rect1.calculateArea() << endl;

    // Second rectangle using overloaded constructor
    float l2, w2;
    cout << "Enter length for second rectangle: ";
    cin >> l2;
    cout << "Enter width for second rectangle: ";
    cin >> w2;

    Rectangle rect2(l2, w2);

    cout << "Area of second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
