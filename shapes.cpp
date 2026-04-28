#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;
using namespace shapes;

int main() {
    int choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Calculate area of a square\n";
        cout << "2. Calculate area of a triangle\n";
        cout << "3. Calculate area of a circle\n";
        cout << "4. Quit\n";
        cin >> choice;

        if (choice == 1) {
            float s;
            cout << "Enter side length: ";
            cin >> s;
            Square sq(s);
            cout << "Area of square: " << Area::calculateSquareArea(sq) << endl;
        }
        else if (choice == 2) {
            float b, h;
            cout << "Enter base: ";
            cin >> b;
            cout << "Enter height: ";
            cin >> h;
            Triangle tri(b, h);
            cout << "Area of triangle: " << Area::calculateTriangleArea(tri) << endl;
        }
        else if (choice == 3) {
            float r;
            cout << "Enter radius: ";
            cin >> r;
            Circle cir(r);
            cout << "Area of circle: " << Area::calculateCircleArea(cir) << endl;
        }
    } while (choice != 4);

    return 0;
}
