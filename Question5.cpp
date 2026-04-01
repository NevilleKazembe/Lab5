
#include <iostream>
using namespace std;

double areaSquare(double side) { return side * side; }
double areaRectangle(double length, double width) { return length * width; }
double areaTriangle(double base, double height) { return 0.5 * base * height; }

int main() {
    int choice;
    while (true) {
        cout << "\nPlease select the area of the shape to calculate\n"
             << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program\n"
             << "Enter selection: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }

        if (choice == 4) break;

        switch (choice) {
            case 1: {
                double side;
                cout << "Enter side length: ";
                cin >> side;
                cout << "Area of square = " << areaSquare(side) << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter length and width: ";
                cin >> length >> width;
                cout << "Area of rectangle = " << areaRectangle(length, width) << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter base and height: ";
                cin >> base >> height;
                cout << "Area of triangle = " << areaTriangle(base, height) << endl;
                break;
            }
            default:
                cout << "Your input was invalid. Please enter a valid option!" << endl;
        }
    }
}