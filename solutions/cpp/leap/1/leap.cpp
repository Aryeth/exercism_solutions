#include "leap.h"

namespace leap {
    bool is_leap_year(int year){
        if (year % 400 == 0) {
            return true;
        } else if (year % 100 == 0) {
            // Can divide by 100 but not 400 is not leap year
            return false; 
        } else if (year % 4 == 0) {
            return true;
        }
        return false;
    }
}  // namespace leap
