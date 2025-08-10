#include "pangram.h"
#include <cctype>

namespace pangram {

// TODO: add your solution here
bool is_pangram(std::string text) {
    std::set<char> m;

    for(char& c : text) {
        if(std::isalpha(c)) {
            m.emplace(std::tolower(c));
        }
    }

    return m.size()==26;
}

}  // namespace pangram
