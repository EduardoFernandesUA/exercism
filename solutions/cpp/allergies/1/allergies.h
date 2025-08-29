#pragma once

#include <string>
#include <vector>
#include <unordered_set>

namespace allergies {

const std::vector<std::string> al{"eggs", "peanuts", "shellfish", "strawberries", "tomatoes", "chocolate", "pollen", "cats"};

// TODO: add your solution here
class list {
private:
    std::unordered_set<std::string> l{};
public:
    void emplace(std::string name);
    bool is_allergic_to(std::string name);
    std::unordered_set<std::string> get_allergies();
};

list allergy_test(unsigned int a);

}  // namespace allergies
