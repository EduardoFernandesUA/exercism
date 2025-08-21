#include "sieve.h"

namespace sieve {

// TODO: add your solution here
std::vector<int> primes(int n) {
    std::vector<int> p(n);
    for(int i=1; i<=n; i++) {
        p[i-1] = i;
    }

    for(int i=2; i<=n/2; i++) {
        if(p[i-1] == 0) {
            continue;
        }
        for(int j=i*2; j<=n; j+=i) {
            p[j-1] = 0;
        }
    }

    std::vector<int> ret{};
    for(int i=1; i<n; i++) {
        if(p[i]!=0) {
            ret.push_back(i+1);
        }
    }
    return ret;
}

}  // namespace sieve
