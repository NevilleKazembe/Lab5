#include <iostream>
using namespace std;

int main() {
    // declare and initialize a pointer
    // so that it does not store a random address
    int* pPointer = nullptr;

    int integerVar = 5;

    // assign pointer to address of object 
    pPointer = &integerVar;

    // output the value of integerVar
    cout << "integerVar: " << integerVar << endl;

    //output the address of integer
    cout << "Address of integerVar: " << &integerVar << endl;

    // output the address assigned to a pointer
    cout << "Address of pPointer: " << &pPointer << endl;

    // output the address of a pPointer
    cout << "Address of a pPointer" << &pPointer << endl;

    return 0;
}