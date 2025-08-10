#include "collatz_conjecture.h"

namespace collatz_conjecture {

// TODO: add your solution here
int steps(int a) {
    if(a<=0) {
        throw std::domain_error("a");
    }
    int c = 0;
    while(a != 1) {
        if(a%2==0) {
            a /= 2;
        } else {
            a = a*3 + 1;
        }
        c++;
    }
    return c;
}

}  // namespace collatz_conjecture
