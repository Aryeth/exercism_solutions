#include "gigasecond.h"

void gigasecond(time_t input, char *output, size_t size){
    time_t future = input + 1000000000; //add one gigasecond

    struct tm *t = gmtime(&future); //transform in a struct (gmtime converts time to struct)
    
    //strftime converts to the string with format
    strftime(output, size, "%Y-%m-%d %H:%M:%S", t);
    // output -> char output array
    // size -> max nb of bytes to write
    // "%Y..." -> format of conversion
    // t -> the time to format (pointing to struct)
}