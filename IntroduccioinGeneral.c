#include <stdio.h>
 /*El siguiente programa cuenta caracteres y es semejante al programa que copia la entrada 
   en la salida un caracter a la vez*/

main(){
    double NumChar;

    for(NumChar=0; getchar()!=EOF; ++NumChar){
        printf("%.0f\n", NumChar);        ;
    }


    /*
    Los operadores + + y -- pueden ser tanto operadores prefijos (+ +NumChar) como postfijos (NumChar + +); 
    esas dos formas tienen diferentes valores dentro de las expresiones (A demostrar proximamente)
    */

}
