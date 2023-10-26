//conversionTest.c

#include <assert.h>
#include <math.h>
#include "conversion.h"

int main(void) {
   double epsilon = 0.1; // Tolerancia, elijo un margen de error para poder comparar Flotantes con doubles
/* para cada fila de tabla de casos */
   assert(fabs(Celsius(100) - 37.8) <= epsilon);
   assert(fabs(Celsius(50) - 10.0) <= epsilon);
   assert(fabs(Celsius(0) - (-17.8)) <= epsilon);
   assert(Farenheit(100) == 212.0);
   assert(Farenheit(50) == 122.0);
   assert(Farenheit(0) == 32.0);
    assert(0);
 return 0;
}