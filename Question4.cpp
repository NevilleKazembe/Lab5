#include <iostream>
using namespace std;

int main() {
    int value;
    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> value;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Sorry, you entered an invalid number, please try again." << endl;
        } else if (value < 5 || value > 10) {
            cout << "You entered " << value << ". Please enter a number between 5 and 10." << endl;
        } else {
            cout << "Your input value (" << value << ") has been accepted." << endl;
            break;
        }
    }
}
