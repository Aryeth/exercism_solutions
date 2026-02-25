#include "darts.h"


uint8_t score(coordinate_t landingpos){

    double result = 0;

    result = sqrt(landingpos.x*landingpos.x + landingpos.y*landingpos.y);

    if(result<=10){ //outer circle
        if(result<=5){ //middle circle
            if(result<=1){ //smallest circle
                return 10;
            }
            return 5;
        }
        return 1;
    }
    
    return 0;
}