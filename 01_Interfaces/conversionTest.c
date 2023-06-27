//conversionTest.c

#include <assert.h>
#include "conversion.h"

int main(void) {
 /* para cada fila de tabla de casos */
    assert(Celsius(100) == 37.8);
    assert(Farenheit(37.8) == 100);
 return 0;
}