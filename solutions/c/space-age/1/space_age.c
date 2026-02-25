#include "space_age.h"


float age(planet_t p, int64_t seconds){
    float age = seconds/31557600;
    switch(p){
        case 0:
            return age/0.2408467;
        case 1:
            return age/0.61519726;
        case 2:
            return age;
        case 3:
            return age/1.8808158;
        case 4:
            return age/11.862615;
        case 5:
            return age/29.447498;
        case 6:
            return age/84.016846;
        case 7:
            return age/164.79132;
        default:
            break;
    }
    return -1;
}