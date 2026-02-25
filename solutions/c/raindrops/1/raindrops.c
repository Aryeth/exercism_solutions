#include "raindrops.h"
#include <string.h>
#include <stdio.h>

void convert(char result[], int drops){
    //divisible by 3
    if(!(drops%3)){
        strcat(result, "Pling");
    }
    //divisible by 5
    if(!(drops%5)){
        strcat(result, "Plang");
    }
    //divisible by 7
    if(!(drops%7)){
        strcat(result, "Plong");
    }
    //divisible by none of em
    if(drops%3 && drops%5 && drops%7){
        sprintf(result, "%d", drops);
    }
    
}