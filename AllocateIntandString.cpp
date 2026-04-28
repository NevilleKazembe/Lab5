#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer and a string
    int* pInt = new int;
    string* pString = new string;

    // Prompt user for input
    cout << "Enter an integer value: ";
    cin >> *pInt;  // dereference pointer to assign value

    cout << "Enter a string value: ";
    cin >> *pString;
 // assign string value

    // Output results
    cout << "\nYou entered integer: " << *pInt << endl;
    cout << "You entered string: " << *pString << endl;

    // Free allocated memory
    delete pInt;
    delete pString;

    return 0;
}
