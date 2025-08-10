#include "hamming.h"

namespace hamming {

int compute(std::string a, std::string b) {
  if (a.size() != b.size()) {
    throw std::domain_error("bah");
  }

  int d = 0;
  for (unsigned int i = 0; i < a.size(); i++) {
    if (a.at(i) != b.at(i)) {
      d += 1;
    }
  }

  return d;
}

} // namespace hamming
