#include <stdio.h>
 /*El siguiente programa utiliza la fórmula °C = (5/9) (°F-32) para imprimir
una tabla de temperaturas Fahrenheit y sus equivalentes centígrados o
Celsius:*/

main(){
    int F;

    for(F=300; F>=0; F=F-20){
        printf("%3d%6.1f\n", F, (5.0/9.0)*(F-32));
    }

}
