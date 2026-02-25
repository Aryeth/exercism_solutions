#include "binary_search.h"


const int *binary_search(int value, const int *arr, size_t length){
    size_t middle = length/2;

    //default case -> not found
     if (length == 0) {
        return NULL;
    }
    
    //Find the middle element of a sorted list and compare it with the item
    if(arr[middle] == value){
        return &arr[middle];
    }else if(arr[middle] > value){
        //search lower half if value smaller
        return binary_search(value, arr, middle);
    }else{
        //search upper half if value smaller
        return binary_search(value, arr+middle+1, length-middle-1);
    }

    return 0;
    
}