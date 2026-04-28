#include "Box.h"

// Default constructor
Box::Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

// Overloaded constructor
Box::Box(const double newLength, const double newBreadth, const double newHeight) {
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

// Destructor
Box::~Box() {
    // Nothing special for now
}

// Setters
void Box::SetLength(double len) { length = len; }
void Box::SetBreadth(double bre) { breadth = bre; }
void Box::SetHeight(double hei) { height = hei; }

// Calculate volume
double Box::GetVolume() {
    return length * breadth * height;
}

// Overload + operator to add two Box objects
Box Box::operator+(const Box& b) {
    Box temp;
    temp.length = this->length + b.length;
    temp.breadth = this->breadth + b.breadth;
    temp.height = this->height + b.height;
    return temp;
}
