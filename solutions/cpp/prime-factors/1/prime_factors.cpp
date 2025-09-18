#include "prime_factors.h"

#include <stdio.h>

namespace prime_factors {

std::vector<long long> of(long long p) {
  std::vector<long long> ret;

  while (p != 1) {
    for (long long i = 2; i <= p; i++) {
      if (p % i == 0) {
        p = p / i;
        ret.push_back(i);
        break;
      }
    }
  }

  return ret;
}

} // namespace prime_factors
