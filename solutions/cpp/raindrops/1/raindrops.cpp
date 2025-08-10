#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
std::string convert(int a) {
    std::string ret = "";
    if(a%3==0) {
        ret += "Pling";
    }
    if(a%5==0) {
        ret += "Plang";
    }
    if(a%7==0) {
        ret += "Plong";
    }
    return ret.empty() ? std::to_string(a) : ret;
}

}  // namespace raindrops
