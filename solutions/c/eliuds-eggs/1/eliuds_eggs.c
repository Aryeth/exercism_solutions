#include "eliuds_eggs.h"
#include <limits.h>

const int total_bits = sizeof(unsigned int) * CHAR_BIT;

unsigned int egg_count(int eggs){
    unsigned int mask = UINT_MAX ^ (UINT_MAX>>1);
    unsigned int count = 0;
    for(int i = 0; i<total_bits; i++){
        if(eggs & mask){
            count++;
        }
        mask = mask>>1;
    }
    return count;
}

