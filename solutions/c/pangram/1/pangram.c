#include "pangram.h"

bool is_pangram(const char *sentence){
    if(sentence == NULL){
        return false;
    }
    int alphabet[26] = {false};
    
        for(size_t i = 0; i<strlen(sentence); i++){
            if (isalpha((unsigned char)sentence[i])) {
                int index = tolower((unsigned char)sentence[i]) - 'a';
                if (index >= 0 && index < 26) {
                    alphabet[index] = true;
                }
            }
        }

    for(size_t i = 0; i<26;i++){
        if(!alphabet[i]){
            return false;
        }
    }

    return true;
}
