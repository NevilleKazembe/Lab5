
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer
    int* pInt = new int;

    // Dynamically allocate a string
    string* pString = new string;

    // User input for integer
    cout << "Enter an integer value: ";
    cin >> *pInt;

    // Clear newline left in buffer
    cin.ignore();

    // User input for string
    cout << "Enter a string value: ";
    getline(cin, *pString);

    // Output the values
    cout << "\nYou entered:" << endl;
    cout << "Integer: " << *pInt << endl;
    cout << "String: " << *pString << endl;

    // Free dynamically allocated memory
    delete pInt;
    delete pString;

    return 0;
}