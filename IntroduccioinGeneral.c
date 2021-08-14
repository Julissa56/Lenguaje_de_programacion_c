#include <stdio.h>
 /*El siguiente programa utiliza la fórmula °C = (5/9) (°F-32) para imprimir
una tabla de temperaturas Fahrenheit y sus equivalentes centígrados o
Celsius:*/

main(){
    int F, C;
    int low, up, step;

    /*low=0; //Limite inferior de la tabla
    up=300; //Limite superior 
    step= 20; //tamaño del incremento

    F=low;
    printf("Fahrenheit\tCelsius \n");
    while (F<=up){
        C= 5*(F-32)/9;
        printf("%3d\t%11d\n", F, C);
        F= F+ step;
    }*/

    low=0; //Limite inferior de la tabla
    up=160; //Limite superior 
    step= 20; //tamaño del incremento

    C=low;
    printf("Celsius\tFahrenheit \n");
    while (C<=up){
        F=((C/5)*9)+32;
        printf("%3d\t%7d\n", C, F);
        C= C+ step;
    }

    /*Se multiplica por 5 y después se divide entre 9, en vez de multiplicar por 5/9 
    porque C, la división de enteros trunca el resultado: cualquier parte fraccionaria se descarta. 
    Puesto que 5 y 9 son enteros, 5/9 sería truncado a cero y así todas las temperaturas Celsius
    se reportarían como cero*/

}
