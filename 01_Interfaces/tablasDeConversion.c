//tablasDeConversion.c
// MAIN

#include <stdio.h>
#include "conversion.h"

int main (int argc, char *argv[]) {

    const int LOWER = 0; // lower limit of table
    const int UPPER = 100; // upper limit
    const int STEP = 5; // step size


    printf("Tablas de conversion de temperaturas: Fahrenheit a celsius.\n\n");
        /*de menor a mayor*/
        printf("%3c %6c\n", 'F', 'C');
        for(float fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
            printf("%3.0f %6.1f\n", fahr, Celsius(fahr));
        }

    printf("\n");
        /*de menor a mayor*/
        printf("Tablas de conversion de temperaturas: celsius a Fahrenheit.\n\n");
        printf("%3c %6c\n", 'C', 'F'); 
        for(float celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP){
            printf("%3.0f %6.1f\n", celsius, Farenheit(celsius));
        }
return 0;
}
