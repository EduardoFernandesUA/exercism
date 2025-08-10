#include "power_of_troy.h"

namespace troy {

void give_new_artifact(human& h, std::string name) {
    h.possession = std::make_unique<artifact>(artifact{name});
}

void exchange_artifacts(std::unique_ptr<artifact>& a, std::unique_ptr<artifact>& b) {
    std::swap(a, b);
}

void manifest_power(human& h, std::string s) {
    h.own_power = std::make_shared<power>(power{s});
}

void use_power(human& a, human& b) {
    b.influenced_by = a.own_power;
}

int power_intensity(human& a) {
    return a.own_power.use_count();
}
    
}  // namespace troy
