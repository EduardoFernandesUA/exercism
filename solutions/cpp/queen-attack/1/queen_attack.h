#pragma once

#include <tuple>
#include <stdexcept>

using piece = std::pair<int, int>;

namespace queen_attack {

// TODO: add your solution here
class chess_board {
private:
    piece w, b;

public:
    chess_board(piece a, piece b);

    piece white() const;
    piece black() const;

    bool can_attack() const;
};

}  // namespace queen_attack
