#include "raindrops.h"

namespace raindrops {
    std::string convert(int i){
        std::string toReturn ="";
        if(i%3==0){
            toReturn.append("Pling");
        }
        if(i%5==0){
            toReturn.append("Plang");
        }
        if(i%7==0){
            toReturn.append("Plong");
        }
        if(toReturn == ""){
            return std::to_string(i);
        }
        return toReturn;
    }
}  // namespace raindrops
