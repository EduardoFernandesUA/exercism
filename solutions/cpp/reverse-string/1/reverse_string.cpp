#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
std::string reverse_string(std::string input) {
    std::reverse(input.begin(), input.end());
    return input;
}

}  // namespace reverse_string
