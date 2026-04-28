#include "Area.h"
#include <cmath>

float Area::calculateSquareArea(const shapes::Square &sq) {
    return sq.getSide() * sq.getSide();
}

float Area::calculateTriangleArea(const shapes::Triangle &tri) {
    return 0.5f * tri.getBase() * tri.getHeight();
}

float Area::calculateCircleArea(const shapes::Circle &cir) {
    return M_PI * cir.getRadius() * cir.getRadius();
}
