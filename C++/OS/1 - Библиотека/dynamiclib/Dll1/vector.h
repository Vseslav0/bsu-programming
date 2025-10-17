#include <utility>

#include "number.h" 
#include <windows.h>

#define VECTOR_API __declspec(dllexport)
template class VECTOR_API std::pair<Number, Number>;

class VECTOR_API Vector {
public:
    Vector(std::pair<Number, Number> data);
    Vector operator+(const Vector& second);
    Number get_radius();
    Number get_angle();

private:
    std::pair<Number, Number> data_;
};
