
#include "vector.h"

#include <cmath>

Vector::Vector(std::pair<Number, Number> data) : data_(data) {}
Vector Vector::operator+(const Vector& second) {
    return std::pair<Number, Number>{this->data_.first + second.data_.first,
                                     this->data_.second + second.data_.second};
}
Number Vector::get_angle() {
    return (data_.first < 0) ? std::acos(this->data_.first)
                             : -std::acos(this->data_.first);
}

Number Vector::get_radius() {
    return std::sqrt(data_.first * data_.first + data_.second * data_.second);
}