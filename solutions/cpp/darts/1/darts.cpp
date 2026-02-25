#include "darts.h"

namespace darts {
    int score(float x, float y){
        //Euclidian distance to the center
        double centerDistance = std::sqrt(x*x +y*y);
        if(centerDistance<=1){
            return 10;    
        }else if (centerDistance<=5){
            return 5;
        }else if (centerDistance<=10){
            return 1;
        }
        //if it isnt in the cases, its out of the target
        return 0;
    }
} // namespace darts