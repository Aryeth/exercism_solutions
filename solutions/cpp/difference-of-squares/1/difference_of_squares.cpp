#include "difference_of_squares.h"

namespace difference_of_squares {
    int square_of_sum(int i){
        int total_sum = 0;
        for(int j=1; j<=i; j++){
            total_sum += j;
        }
    return total_sum*total_sum;
    }
    int sum_of_squares(int i){
       int total_sum = 0;
        for(int j=1; j<=i; j++){
            total_sum += j*j;
        }
    return total_sum;
    }
    int difference(int i){
        return (square_of_sum(i)-sum_of_squares(i));
    }
}  // namespace difference_of_squares
