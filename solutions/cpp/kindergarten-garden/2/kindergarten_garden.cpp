#include "kindergarten_garden.h"

namespace kindergarten_garden {
    
    Plants char_to_plant(char ch){
        switch(ch){
            case 'G':
                return Plants::grass;
            case 'C':
                return Plants::clover;
            case 'R':
                return Plants::radishes;
            case 'V':
                return Plants::violets;
        }
        return Plants::grass;
    }

    // Takes in the garden string, then divides into row. Assigns the plants to the student left to right top to bottom
    std::array<Plants, 4> plants(const std::string& plantsStr, const std::string& student) {
        
    std::array<Plants, 4> studentPlants{};
    const int position = student[0] - 'A';

    std::string row1 = plantsStr.substr(0, plantsStr.find('\n'));
    std::string row2 = plantsStr.substr(plantsStr.find('\n') + 1);

    int startIndex = position * 2;

    studentPlants[0] = char_to_plant(row1[startIndex]);
    studentPlants[1] = char_to_plant(row1[startIndex + 1]);
    studentPlants[2] = char_to_plant(row2[startIndex]);
    studentPlants[3] = char_to_plant(row2[startIndex + 1]);

    return studentPlants;
    }

}  // namespace kindergarten_garden
