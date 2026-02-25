#include "robot_simulator.h"
#include <stddef.h>

robot_status_t robot_create(robot_direction_t direction, int x, int y){
    robot_status_t toReturn;
    toReturn.direction = direction;
    toReturn.position.x = x;
    toReturn.position.y = y;

    return toReturn;
}

void robot_move(robot_status_t *robot, const char *commands){

    if(commands == NULL){return;}

    for(int i = 0; commands[i] != '\0'; i++){
        char c = commands[i];
        switch(c){
                //Note : could probably use max and default too for edgecases
            case 'R':
                //turn right
                if(robot->direction >=3){// facing west -> wrap around to north
                    robot->direction = 0;
                }else{
                    ++robot->direction;
                }
                break;
            case 'L':
                //left
                if(robot->direction <=0){ // facing north -> wrap around to west
                    robot->direction = 3;
                }else{
                    --robot->direction;
                }
    
                break;
            case 'A':
                //move forward
                switch(robot->direction){
                    case 0: // north
                        ++robot->position.y;
                        break;
                    case 1: // east
                         ++robot->position.x;
                        break;
                    case 2: //south
                        --robot->position.y;
                        break;
                    case 3: //west
                        --robot->position.x;
                        break;
                    default: //for the default and max, unused either way
                        break;
                }
                break;
            default:
                break;
        }
    }
    
}
