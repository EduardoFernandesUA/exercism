#include "leap.h"

namespace leap {

// TODO: add your solution here
bool is_leap_year(int a) {
    if(a%400==0) {
        return true;
    } else if(a%100==0) {
        return false;
    } else if(a%4==0) {
        return true;
    }
    return false;
}

}  // namespace leap
