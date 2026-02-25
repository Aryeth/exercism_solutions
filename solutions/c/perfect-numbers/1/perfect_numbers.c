#include "perfect_numbers.h"
#include <math.h>

//factorize number and sum
int factorize_and_sum(int nb) {
    int sum = 0;
    for (int i = 1; i < nb; ++i) {
        if (nb % i == 0) {
            sum += i;
        }
    }
    return sum;
}

kind classify_number(int nb){
    if (nb <= 0) {
        return -1;
    }

    int sum = factorize_and_sum(nb);
    
    if (sum == nb) {
        return PERFECT_NUMBER;
    } else if (sum > nb) {
        return ABUNDANT_NUMBER;
    } else {
        return DEFICIENT_NUMBER;
    }
}