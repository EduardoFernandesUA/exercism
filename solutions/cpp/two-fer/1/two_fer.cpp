#include "two_fer.h"

namespace two_fer {

// TODO: add your solution here
std::string two_fer(std::string name) {
    return !name.empty() ? "One for " + name + ", one for me." : "One for you, one for me.";
}

}  // namespace two_fer
