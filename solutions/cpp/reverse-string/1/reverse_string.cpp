#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string input){
        std::string output = "";
        for(char c : input){
            output.insert(0,1,c);
        }
        return output;
    }
}  // namespace reverse_string
