#include "grains.h"

namespace grains {

// TODO: add your solution here
uint64_t square(uint64_t a) {
    return uint64_t(0x1)<<(a-1);
}

uint64_t total() {
    uint64_t sum = 0;
    for(uint64_t i=1; i<=64; i++) {
        sum += square(i);
    }
    return sum;
}

}  // namespace grains
