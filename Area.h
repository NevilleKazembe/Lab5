#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static float calculateSquareArea(const shapes::Square &sq);
    static float calculateTriangleArea(const shapes::Triangle &tri);
    static float calculateCircleArea(const shapes::Circle &cir);
};
