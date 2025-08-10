#include "nth_prime.h"

namespace nth_prime {

// TODO: add your solution here
int nth(int a) {
    if(a<=0) {
        throw std::domain_error("bah");
    }

    std::vector<int> primes{2};
    int next = 3;
    bool prime;
    while(primes.size()<=(long unsigned)a) {
        prime = true;
        for(int i=0; primes.at(i)<=next/2; i++) {
            if(next%primes.at(i)==0) {
                prime = false;
                break;
            }
        }
        if(prime) {
            primes.push_back(next);
        }
        next += 2; 
    }

    return primes.at(a-1);

}

}  // namespace nth_prime
