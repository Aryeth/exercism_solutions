#include "triangle.h"
#include <stdio.h>
#include <stdlib.h>

/*

typedef struct {
   double a;
   double b;
   double c;
} triangle_t;
*/

//checks if is a triangle -> if sides are non-null, then the equations
#define IS_TRIANGLE(A) \
    (A.a && A.b && A.c && \
     ((A).a + (A).b >= (A).c) && \
     ((A).b + (A).c >= (A).a) && \
     ((A).a + (A).c >= (A).b))


//3 sides same length
int is_equilateral(triangle_t sides){
    if(!IS_TRIANGLE(sides)){
        return 0;
    }
    return sides.a == sides.b ? 1 : sides.b == sides.c ? 1 : 0;
}

//at least 2 sides same length
int is_isosceles(triangle_t sides){
    if(!IS_TRIANGLE(sides)){
        return 0;
    }
    return sides.a == sides.b ? 1 : sides.b == sides.c ? 1 : sides.a == sides.c ? 1 : 0;
}

//all sides different
int is_scalene(triangle_t sides){
    if(!IS_TRIANGLE(sides)){
        return 0;
    }
    return sides.a == sides.b ? 0 : sides.b == sides.c ? 0 : sides.a == sides.c ? 0 : 1;
}
