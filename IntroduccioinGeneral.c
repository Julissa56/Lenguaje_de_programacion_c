#include <stdio.h>
 /*El siguiente programa utiliza la fórmula °C = (5/9) (°F-32) para imprimir
una tabla de temperaturas Fahrenheit y sus equivalentes centígrados o
Celsius:*/

main(){

    #define LOWER 0   /*Límite inferior de la tabla*/
    #define UPPER 300  /*Límite superior*/
    #define STEP 20    /*Tamaño de incremento*/

    int F;

    for( F=LOWER; F<= UPPER ; F=F+STEP ) {
        printf("%3d%6.1f\n", F, (5.0/9.0)*(F-32));
    }


}
