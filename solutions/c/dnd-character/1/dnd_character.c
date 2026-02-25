#include "dnd_character.h"
#include "stdlib.h"

//comparator for qsort
int cmp_asc(const void *a, const void *b) {
    return (*(int*)a) - (*(int*)b);
}

//makes a dice roll
int ability(void) {

    int dices[4] = {0,0,0,0};
    int total = 0;
    //rolling dices
    for(long unsigned int i = 0; i<sizeof(dices)/sizeof(int); i++){
        dices[i] = ((rand() % 6) + 1);;
    }
    //sorting dices
    qsort(dices,sizeof(dices)/sizeof(int), sizeof(int), cmp_asc);
    
    //totaling 3 biggest dices
    for(long unsigned int i = 0; i<sizeof(dices)/sizeof(int)-1; i++){
        total += dices[i];
    }

    return total;
}

int modifier(int score) {
    int diff = score - 10;
    if (diff >= 0) {
        return diff / 2;
    } else {
        return (diff - 1) / 2;
    }
}

//makes a dnd character
dnd_character_t make_dnd_character(void){
    dnd_character_t c;

    c.strength = ability();
    c.dexterity = ability();
    c.constitution = ability();
    c.intelligence = ability();
    c.wisdom = ability();
    c.charisma = ability();
    c.hitpoints = 10 + modifier(c.constitution);
    
    return c;
}