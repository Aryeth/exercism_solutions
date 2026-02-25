#include "doctor_data.h"

namespace heaven {
    std::string get_older_bob(Vessel a, Vessel b) {
        return (a.generation <= b.generation) ? a.name : b.name;
    }

    bool in_the_same_system(Vessel a, Vessel b) {
        return a.current_system == b.current_system;
    }
}
