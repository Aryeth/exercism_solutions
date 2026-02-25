#pragma once

#include <string>

namespace star_map {
    enum System {
    Sol,
    BetaHydri,
    EpsilonEridani,
    AlphaCentauri,
    DeltaEridani,
    Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
    public:
        std::string name;
        int generation;
        star_map::System current_system ;
        int busters;

        void make_buster(){busters++;};

        bool shoot_buster(){return (busters-->=1);};

        
    
        Vessel(std::string name, int generation ) : name(name), generation(generation) {};
        Vessel(std::string name, int generation , star_map::System current_system ) : name(name), generation(generation), current_system (current_system) {};
    
        heaven::Vessel replicate(std::string){return Vessel(name, generation+1);};
    };

    std::string get_older_bob(Vessel, Vessel);
    bool in_the_same_system(Vessel, Vessel);
}

