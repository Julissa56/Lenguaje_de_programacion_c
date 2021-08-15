#include <stdio.h>
 /*Programa que copia la entrada en la salida, un carácter a la vez:*/

main(){
    int c;

    printf("EOF es igual a:%d\ngetchar() !=EOF es igual a: %d \n\n", EOF, getchar() != EOF);

    while((c=getchar()) != EOF){
        putchar(c);
    }
    /*
    -Cualquier tipo de entero puede usarse para almacenar char
    -El problema es distinguir el fin de la entrada de los datos válidos
    -Getchár devuelve un valor distintivo cuando no hay más a la entrada, 
        un valor que no puede ser confundido con ningún otro carácter.
    -EOF “end of file (fin de archivo)”, un entero definido en <stdio.h>
    - Int es lo suficientemente grande para mantener EOF, char no
    */

}
