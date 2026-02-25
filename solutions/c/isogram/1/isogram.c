#include "isogram.h"
#include <stddef.h>
#include <string.h>

bool is_isogram(const char phrase[]){
    
    if(phrase == NULL){return false;} // I lost so much time there forgot edgecase lol

    //array of seen letters
    bool seen[26];
    memset(seen, 0, sizeof(seen));

    //O(n) search
    for(size_t i = 0; phrase[i] != '\0'; i++){
        char c = phrase[i];
        
        //char is uppercase
        if(c >= 'A' && c <= 'Z'){
            if(seen[c-'A']){
                return false;
            }
            seen[c-'A'] = true;
            continue;
        }

        //char is lowercase
        if(c >= 'a' && c <= 'z'){
            if(seen[c-'a']){
                return false;
            }
            seen[c-'a'] = true;
        }
    }
    return true;
}