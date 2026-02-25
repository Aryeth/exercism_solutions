#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int pos = line.find(':')+2;
        std::string toReturn = line.substr(pos);
        return toReturn;
        
    }

    std::string log_level(std::string line) {
        // return the log level
        int pos = line.find(']')-1;
        std::string toReturn = line.substr(1,pos);
        return toReturn;
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        std::string level = log_level(line);
        std::string msg = message(line);
        std::string toReturn = "" + msg + " (" + level + ")";
        return toReturn;
    }
}
