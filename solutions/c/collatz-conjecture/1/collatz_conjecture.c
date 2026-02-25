#include "collatz_conjecture.h"


int steps(int start){
    int cnt = 0;
    if(start <= 0){
        return -1;
    }

    while(start>1){
       if(start % 2 == 0){
            start /= 2;
        }else{
            start *= 3;
            ++start;
        }
    ++cnt; 
    }

    return cnt;
}