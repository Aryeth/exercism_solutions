#include "resistor_color_duo.h"


 uint16_t color_code(resistor_band_t *tablo){

     uint16_t result = 0;
     int mult =1;
     
     for(int i = 1; i>=0; i--){
         result += mult*tablo[i];
         mult *=10;
     }
     return result;
 }