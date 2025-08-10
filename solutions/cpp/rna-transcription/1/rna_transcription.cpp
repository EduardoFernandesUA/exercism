#include "rna_transcription.h"

namespace rna_transcription {

// TODO: add your solution here
char to_rna(char i) {
    if(i=='G') {
        return 'C';
    } else if(i=='C') {
        return 'G';
    } else if(i=='T') {
        return 'A';
    } else if(i=='A') {
        return 'U';
    }
    return ' ';
}
std::string to_rna(std::string i) {
    std::string ret = "";
    for(char c : i) {
        ret += to_rna(c);
    }
    return ret;
}


}  // namespace rna_transcription
