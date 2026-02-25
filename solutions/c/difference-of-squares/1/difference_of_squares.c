#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int nb){
    unsigned int sum = 0;
    for(unsigned int i = 1; i<=nb; i++){
        sum += i;
    }
    return sum*sum;
}

unsigned int sum_of_squares(unsigned int nb){
    unsigned int sum = 0;
    for(unsigned int i = 1; i<=nb; i++){
        sum += i*i;
    }
    return sum;
}

unsigned int difference_of_squares(unsigned int i){
    return square_of_sum(i)-sum_of_squares(i);
}