#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2){

    //over 7 check
    if(queen_1.row > 7 || queen_2.row > 7 || queen_1.column > 7 || queen_2.column > 7){
        return INVALID_POSITION;
    }

    //row attack w/ same spot check
    if(queen_1.row == queen_2.row){
         if(queen_1.column == queen_2.column){
             return INVALID_POSITION;
         }
        return CAN_ATTACK;
    }

    //column attack w/ same column check
    if(queen_1.column == queen_2.column){
        if(queen_1.row == queen_2.row){
            return INVALID_POSITION;
        }
        return CAN_ATTACK;
    }

    //diagonal check
    if (abs(queen_1.row - queen_2.row) == abs(queen_1.column - queen_2.column)) {
    return CAN_ATTACK;
    }

    

    return CAN_NOT_ATTACK;
}