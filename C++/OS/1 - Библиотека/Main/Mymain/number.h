
#pragma once

class Number;

class Number {
public:
    Number(long double a);
    Number(const Number&);
    Number(Number&&);
    Number& operator=(const Number&);
    Number& operator=(Number&&);
    Number operator+(const Number& n);
    Number operator-(const Number& n);
    Number operator*(const Number& n);
    Number operator/(const Number& n);
    static Number Zero() { return 0; }
    static Number One() { return 1; }
    operator double() const { return a_; }

private:
    long double a_;
};