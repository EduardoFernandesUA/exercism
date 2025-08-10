#include "triangle.h"
#include <stdexcept>

namespace triangle {

// TODO: add your solution here
flavor kind(double a, double b, double c) {
    if(a==0 || b==0 || c==0 || a+b<c || b+c<a ||a+c<b) {
        throw std::domain_error("bah");
    }
    if(a==b && b==c) {
        return flavor::equilateral;
    }else if(a==b || b==c || a==c) {
        return flavor::isosceles;
    }else {
        return flavor::scalene;
    }
}
}  // namespace triangle
