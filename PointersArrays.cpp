#include <iostream>
using namespace std;

int main() {
    int numbersArray[5];      // Declare an integer array of 5 elements
    int* pPointer = nullptr;  // Declare a pointer and initialize to null

    // Assign the address of the first element to the pointer
    pPointer = numbersArray;

    *pPointer = 10; // Assign a value to the first element

    // Increment the pointer using pointer arithmetic to point to the second element
    pPointer++;
    *pPointer = 20; // Assign a value to the second element

    // Assign the address of the third element directly
    pPointer = &numbersArray[2];
    *pPointer = 30; // Assign a value to the third element

    // Assign the address of the fourth element using pointer arithmetic
    pPointer = numbersArray + 3;
    *pPointer = 40; // Assign a value to the fourth element

    // Reset pointer to the first element
    pPointer = numbersArray;

    // Assign a value to the fifth element using indirection and pointer arithmetic
    *(pPointer + 4) = 50;

    // Iterate and output all elements in the array
    cout << "Array elements: ";
    for (int n = 0; n < 5; n++) {
        cout << numbersArray[n] << " ";
    }
    cout << endl;

    return 0;
}
