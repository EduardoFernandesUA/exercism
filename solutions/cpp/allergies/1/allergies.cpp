#include "allergies.h"

namespace allergies {

// TODO: add your solution here
void list::emplace(std::string name) {
    l.emplace(name);
}

std::unordered_set<std::string> list::get_allergies() {
    return l;
}

bool list::is_allergic_to(std::string name) {
    return l.find(name) != l.end();
}

list allergy_test(unsigned int a) {
    (void) a;
    list ret;

    for(size_t i=0; i<al.size(); i++) {
        if(a&0x1) {
            printf("%s\n", al.at(i).c_str());
            ret.emplace(al.at(i));
        }
        a >>= 1;
    }

    return ret;
}

}  // namespace allergies
