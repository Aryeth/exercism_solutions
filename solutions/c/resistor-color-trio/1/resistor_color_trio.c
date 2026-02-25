#include "resistor_color_trio.h"

resistor_value_t color_code(resistor_band_t * r){
    resistor_value_t toReturn;

    //basic 2band value
    toReturn.value = (r[0]*10 + r[1]);

    //compute zeroes (before number)
    int zeroes = ((int)r[2]);

    //Ohm, kilo mega giga...
    if(zeroes <3){
        toReturn.unit = 0;
    }else if(zeroes <6){
        toReturn.unit = 1;
    }else if(zeroes <9){
        toReturn.unit = 2;
    }else{
        toReturn.unit = 3;
    }

    //Zeroes that arent in the units
    for(int i = 0; i<zeroes%3; i++){
        toReturn.value *= 10;
    }

    //this is disgusting but I got no better idea, any clue ?
    if(toReturn.value >= 1000){
        toReturn.unit++;
        toReturn.value /=1000;
    }
    
    
    return toReturn;
}