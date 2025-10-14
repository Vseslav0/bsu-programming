
#include "number.h"

Number::Number(long double a) : a_(a) {}
Number::Number(const Number&) = default;
Number::Number(Number&&) = default;
Number& Number::operator=(const Number&) = default;
Number& Number::operator=(Number&&) = default;
Number Number::operator+(const Number& n) { return this->a_ + n.a_; }
Number Number::operator-(const Number& n) { return this->a_ - n.a_; }
Number Number::operator*(const Number& n) { return this->a_ * n.a_; }
Number Number::operator/(const Number& n) { return this->a_ / n.a_; }