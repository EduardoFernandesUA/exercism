#include "difference_of_squares.h"

namespace difference_of_squares {

// TODO: add your solution here
int square_of_sum(int a) {
    int c = 0;
    for(int i=1; i<=a; i++) {
        c += i;
    }
    return c*c;
}

int sum_of_squares(int a){
    int c = 0;
    for(int i=1; i<=a; i++) {
        c += i*i;
    }
    return c;
}

int difference(int a){
    return square_of_sum(a) - sum_of_squares(a);
}

}  // namespace difference_of_squares
