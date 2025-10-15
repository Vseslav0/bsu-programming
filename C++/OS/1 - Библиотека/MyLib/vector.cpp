
#include "vector.h"

#include <cmath>

Vector::Vector(std::pair<Number, Number> data) : data_(data) {}
Vector Vector::operator+(const Vector& second) {
    return std::pair<Number, Number>{this->data_.first + second.data_.first,
                                     this->data_.second + second.data_.second};
}
Number Vector::get_angle() {
    long double s = this->data_.first * this->data_.first +
                    this->data_.second * this->data_.second;
    return (data_.first < 0) ? std::acos((double)this->data_.first / s)
                             : -std::acos((double)this->data_.first / s);
}

Number Vector::get_radius() {
    return std::sqrt(data_.first * data_.first + data_.second * data_.second);
}