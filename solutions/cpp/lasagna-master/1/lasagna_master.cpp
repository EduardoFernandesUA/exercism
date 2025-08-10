#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
int preparationTime(const std::vector<std::string>& layers, const int avgPrepTime) {
    return layers.size() * avgPrepTime;
}
    
amount quantities(const std::vector<std::string>& layers) {
    amount ret = {0,0.0};
    for(const std::string& l : layers) {
        if(l=="noodles") {
            ret.noodles += 50;
        }else if(l=="sauce") {
            ret.sauce += 0.2;
        }
    }
    return ret;
}

void addSecretIngredient(std::vector<std::string>& myList, const std::vector<std::string>& friendsList) {
    myList.back() = friendsList.back();
}
void addSecretIngredient(std::vector<std::string>& myList, const std::string& secret) {
    myList.back() = secret;
}

std::vector<double> scaleRecipe(const std::vector<double>& quantities, const int scale) {
    std::vector<double> ret(quantities.size());
    for(unsigned int i=0; i<quantities.size(); i++) {
        ret[i] = quantities[i] * (static_cast<double>(scale)/2);
    }
    return ret;
}



}  // namespace lasagna_master
