// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#ifndef Doctor_h
#define Doctor_H

#include <string>

namespace star_map {
    enum class System {
        BetaHydri, Sol, EpsilonEridani, AlphaCentauri, DeltaEridani, Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
        public:
            std::string name;
            unsigned int generation;
            star_map::System current_system;
            unsigned int busters{0};
    
            Vessel(std::string name, int generation, star_map::System current_system = star_map::System::Sol) 
                : name(name), generation(generation), current_system(current_system) {};

            Vessel replicate(std::string newName) {
                return Vessel(newName, generation+1, current_system);
            }

            void make_buster() {
                busters++;
            }

            bool shoot_buster() {
                if(busters > 0) {
                    busters--;
                    return true;
                }
                return false;
            }
    };

    static std::string get_older_bob(Vessel a, Vessel b) {
        return a.generation < b.generation ? a.name : b.name;
    }
    
    static bool in_the_same_system(Vessel a, Vessel b) {
        return a.current_system == b.current_system;
    }
}



#endif