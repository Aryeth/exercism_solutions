#include "binary.h"
#include "stdlib.h"
#include "limits.h"

int convert(const char *input) {
    int result = 0;
    while (*input) {
        if (*input != '0' && *input != '1') {
            return -1;
        }
        result = result * 2 + (*input - '0');
        input++;
    }
    return result;
}
