#include "protein_translation.h"

namespace protein_translation {

// TODO: add your solution here
std::vector<std::string> proteins(std::string s) {
    std::vector<std::string> ret{};
    for(size_t i=0; i<s.size(); i+=3) {
        std::string sub = s.substr(i, 3);

        if(sub == "AUG") {
            ret.push_back("Methionine");
        } else if(sub == "UUU" || sub == "UUC") {
            ret.push_back("Phenylalanine");
        } else if(sub=="UUA"||sub=="UUG") {
            ret.push_back("Leucine");
        } else if(sub=="UCU"||sub=="UCC"||sub=="UCA"||sub=="UCG") {
            ret.push_back("Serine");
        } else if(sub=="UAU"||sub=="UAC") {
            ret.push_back("Tyrosine");
        } else if(sub=="UGU"||sub=="UGC") {
            ret.push_back("Cysteine");
        } else if(sub=="UGG") {
            ret.push_back("Tryptophan");
        } else if(sub=="UAA"||sub=="UAG"||sub=="UGA") {
            break;
        }
        
        
    }
    return ret;
}

}  // namespace protein_translation
