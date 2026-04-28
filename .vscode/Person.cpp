#include "Person.h"
#include <iostream>
using namespace std;

// Default constructor
Person::Person() {
    mFirstName = "";
    mWeight = 0.0f;
    mAge = 0;
}

// Overloaded constructor
Person::Person(string newFirstName, float newWeight, int newAge) {
    mFirstName = newFirstName;
    mWeight = newWeight;
    mAge = newAge;
}

// Destructor
Person::~Person() {
    // Nothing special for now
}

// Overload + operator (adds weights)
float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

// Overload == and != using mFirstName
bool Person::operator==(const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}

// Overload < and > using mAge
bool Person::operator<(const Person& otherPerson) {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) {
    return this->mAge > otherPerson.mAge;
}
