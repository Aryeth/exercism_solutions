#include "grains.h"

uint64_t square(uint8_t n){
    if(n >64 || n<=0){
        return 0;
    }
    uint64_t sum =1;
    for(int i = 1; i < n; i++){
        sum *=2;
    }
    return sum;
}

uint64_t total(){
    uint64_t total = 0;
    for(int i = 64; i>=1; i--){
        total += square(i);
    }
    return total;
}