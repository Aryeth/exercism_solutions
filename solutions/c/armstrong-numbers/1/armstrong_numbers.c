#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate){
    int digits = 0, tmp = 0;
    int armstrong = 0;

    //count the digits
    for(double i = candidate ; (int)i != 0 ; i/=10){
        digits++;
    }

    //go through every digit
    for(double i = candidate ; (int)i != 0 ; i/=10){
        //extracted digit (least significant)
        tmp = (int)i%10;

        //between 1 and digits; not 0 otherwise i.e. 5 -> 5^2 -> 25 incorrect, should be 5^1 = 5
        for(int j = 1; j<digits; j++){
            tmp *= (int)i%10;
        }

        //add the power to our number
        armstrong += tmp;
    }
    //simple check
    return armstrong == candidate;    
}