#include "secret_handshake.h"

namespace secret_handshake {

// TODO: add your solution here
std::vector<std::string> commands(unsigned int b) {
    std::vector<std::string> ret;

    if(b&0x1) {
        ret.push_back("wink");
    }

    if(b&0x2) {
        ret.push_back("double blink");
    }

    if(b&0x4) {
        ret.push_back("close your eyes");
    }

    if(b&0x8) {
        ret.push_back("jump");
    }

    if(b&16) {
        std::reverse(ret.begin(), ret.end());
    }

    return ret;
}

}  // namespace secret_handshake
