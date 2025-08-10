#pragma once

#include <map>
#include <vector>
#include <string>

namespace grade_school {

typedef std::map<int, std::vector<std::string>> Roster;

// TODO: add your solution here
class school {
private:
    Roster rosterMap;

public:
    const Roster& roster() const {
        return rosterMap;
    }

    void add(std::string name, int grade) {
        auto vec = rosterMap[grade];
        for (auto it = rosterMap[grade].begin(); it != rosterMap[grade].end(); ++it) {
            if(name < *it) {
                rosterMap[grade].insert(it, name);
                return;
            }
        }
        rosterMap[grade].push_back(name);
    }

    const std::vector<std::string>& grade(int grade) const {
        const static std::vector<std::string> empty = {};
        if(rosterMap.find(grade) == rosterMap.end()) return empty;
        return rosterMap.at(grade);
    }
};

}  // namespace grade_school
