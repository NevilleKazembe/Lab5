#pragma once
#include <string>
using namespace std;

class Person {
public:
    Person();                                   // Default constructor
    Person(string newFirstName, float newWeight, int newAge); // Overloaded constructor
    ~Person();                                  // Destructor

    // Overload + operator to add two Person objects (sum of weights)
    float operator+(const Person& otherPerson);

    // Overload relational operators using mFirstName
    bool operator==(const Person& otherPerson);
    bool operator!=(const Person& otherPerson);

    // Overload relational operators using mAge
    bool operator<(const Person& otherPerson);
    bool operator>(const Person& otherPerson);

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
