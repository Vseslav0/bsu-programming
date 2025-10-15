
#include <iostream>

#include "number.h"
#include "vector.h"

int main() {
    Vector a(std::pair<Number, Number>(0, 0));
    Vector b(std::pair<Number, Number>(2, 1));
    Vector c = a + b;
    std::cout << c.get_angle() << '\n';
}