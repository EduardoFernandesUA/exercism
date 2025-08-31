#include "sum_of_multiples.h"

namespace sum_of_multiples {

// TODO: add your solution here
unsigned int to(std::set<unsigned> v, unsigned n) {
    std::set<unsigned> s{};

    for(const auto& a : v) {
        for(unsigned j=0; j<n; j+=a) {
            s.emplace(j);
        }
    }

    return std::accumulate(s.begin(), s.end(), 0);
}

}  // namespace sum_of_multiples
