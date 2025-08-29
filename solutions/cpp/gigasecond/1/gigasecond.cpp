#include "gigasecond.h"

namespace gigasecond {

// TODO: add your solution here
ptime advance(ptime cur) {
    return cur + seconds(1000000000);
}
    
}  // namespace gigasecond
