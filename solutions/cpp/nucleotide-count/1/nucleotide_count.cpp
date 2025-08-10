#include "nucleotide_count.h"

namespace nucleotide_count {

// TODO: add your solution here
std::map<char, int> count(std::string inp) {
    std::map<char, int> ret{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};

    for(char c : inp) {
        if(ret.find(c)!=ret.end()) {
            ret[c] += 1;
        } else {
            throw std::invalid_argument("");
        }
    }

    return ret;
}

}  // namespace nucleotide_count
