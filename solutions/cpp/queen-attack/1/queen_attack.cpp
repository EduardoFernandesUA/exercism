#include "queen_attack.h"

namespace queen_attack {

// TODO: add your solution here

chess_board::chess_board(piece a, piece b) : w(a), b(b) {
    if(
        w.first < 0 || 
        w.first > 7 ||
        w.second < 0 || 
        w.second > 7 ||
        b.first < 0 || 
        b.first > 7 ||
        b.second < 0 || 
        b.second > 7 ||
        (a.first == b.first && a.second == b.second)
    ) {
        throw std::domain_error("");
    }
};

piece chess_board::white() const {
    return w;
}
piece chess_board::black() const {
    return b;
}

bool chess_board::can_attack() const {
  if (w.first == b.first || w.second == b.second ||
      w.first - w.second == b.first - b.second ||
      w.first + w.second == b.first + b.second) {
    return true;
  }
  return false;
}

}  // namespace queen_attack
