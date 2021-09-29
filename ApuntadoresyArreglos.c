#include <stdio.h>

void main(){
    int x=1, y=2, z[10];
    int *ip;                        //ip es un apuntador a int

    printf("X=%d  y=%d  z=%d, ip=%d\n",x,y,z[0],ip);
    ip=&x;                          //ip ahora apunta a x
    printf("ip, que apunta a x es igual a la direccion:%d\n",ip);
    y=*ip;                          //y es ahora 1
    printf("y, que es igual a ip, ahora es igual al contenido: %d\n", y);
    *ip=0;                          //x es ahora 0
    printf(" direccion ip=%d    contenido ip=%d     x=%d\n", ip, *ip, x);
    ip=&z[0];                       //ip ahora apunta a z[0]
    z[0]=7;
    printf("\nip apunta z[0]\n");
    printf("direccion ip=%d    contenido ip=%d     x=%d     z[0]=%d\n", ip, *ip, x, z[0]);


    *ip=*ip+10;
    printf("direccion ip=%d    contenido ip=%d     x=%d     y=%d     z[0]=%d\n", ip, *ip, x, y, z[0]);
    y=*ip+1;
    printf("direccion ip=%d    contenido ip=%d     x=%d     y=%d     z[0]=%d\n", ip, *ip, x, y, z[0]);

    (*ip)++;                        //Los paréntesis son necesarios sin ellos, la expresión incrementaría ip en lugar de a lo que apunta
    printf("direccion ip=%d    contenido ip=%d     x=%d     y=%d     z[0]=%d\n", ip, *ip, x, y, z[0]);
}


/*
    
    
    Apuntador
    -variable que contiene la dirección de una variable
    -llevan un código más compacto y eficiente 
    -apuntadores y los arreglos relacionados íntimamente;
    -el tipo void * (apuntador a void) reemplaza a char * como el tipo apropiado para un apuntador genérico.

    Memoria
    un arreglo de celdas de memoria numeradas o direccionadas consecutivamente, que pueden manipularse 
    individualmente o en grupos contiguos

    -El operador unario & da la dirección de un objeto
    -p = &c; asigna la dirección de c a la variable p
    -& sólo se aplica a objetos que están en memoria: variables y elementos de arreglos
    -El operador unario * es el operador de indirección, da acceso al objeto al que señala el apuntador

*/