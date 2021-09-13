#include<stdio.h>
#include<limits.h>

#define VARIABLE   h
/*
    Determinar rangos de los tipos enteros: char, short, int y long
    signed y unsigned 
    e imprimir valores 
*/


void Es_signed_char(void);
void Es_unsigned_char(void);
void Es_signed_short(void);
void Es_unsigned_short(void);
void Es_signed_long(void);
void Es_unsigned_long(void);



void main()
{
    unsigned char a;
    unsigned short b;
    unsigned int c;
    unsigned long d;

    signed char e;
    signed short f;
    signed int g;
    signed long h;
    
    if((VARIABLE=SCHAR_MAX+1)==SCHAR_MIN){
        printf("La variable actual es: signed char\n");
        printf("Con rango: %d - %d\n\n", SCHAR_MIN, SCHAR_MAX);
    }
    else if((VARIABLE=UCHAR_MAX+1)==0){
        Es_unsigned_char();
    }
    else if((VARIABLE=SHRT_MAX+1)<0){
        Es_signed_short();
    }
    else if((VARIABLE=USHRT_MAX+1)==0){
        Es_unsigned_short();
    }
    else if((VARIABLE=LONG_MAX+1)<0){
        Es_signed_long();
    }
    else if((VARIABLE=ULONG_MAX+1)==0){
        Es_unsigned_long();
    }
    else{
        printf("Hubo un error con la variable %d\n\n", 1);
    }
    //e=SCHAR_MAX+1;
    //printf("%d\n",e);
    /*Encuentra_rango(a);
    Encuentra_rango(b);
    Encuentra_rango(c);
    Encuentra_rango(d);
    Encuentra_rango(e);
    Encuentra_rango(f);
    Encuentra_rango(g);
    Encuentra_rango(h);
    */
    
    
    
    
   /* char caracter=0;    //por defecto es signed (en esta maquina)
    int entero=0;       //entero de 32 bits signed
    signed short corto=0; //15 bits para numeros positivos, MSB para negativos

    unsigned char crctr=0;    //por defecto es signed (en esta maquina)
    */
    
    //CHAR
    /*printf("char= %d\n", caracter);

    caracter=127;
    printf("char= %d\n", caracter);

    ++caracter; //-128
    printf("char= %d\n", caracter);
    */

    //INT ----------------------------------------------------------------------
   /* printf("entero= %d\n", entero);

    entero=2147483647; 
    printf("entero= %d\n", entero);

    ++entero; //-128
    printf("entero= %d\n", entero);*/

    //UNSIGNED CHAR------------------------------------------------------------
    /*printf("char= %d\n", crctr);

    crctr=255;
    printf("char= %d\n", crctr);

    ++crctr; //-128
    ++crctr;
    ++crctr;
    printf("char= %d\n", crctr);*/

    //SHORT ----------------------------------------------------------------------
    /*printf("corto= %d\n", corto);

    corto=32767; 
    printf("corto= %d\n", corto);

    ++corto; //-32768
    corto=corto+32769;
    printf("corto= %d\n", corto);
    */
}

void Es_signed_char(void){
    printf("La variable actual es: signed char\n");
    printf("Con rango: %d - %d\n\n", SCHAR_MIN, SCHAR_MAX);
}

void Es_unsigned_char(void){
    printf("La variable actual es: unsigned char\n");
    printf("Con rango: %d - %d\n\n", 0, UCHAR_MAX);
}

void Es_signed_short(void){
    printf("La variable actual es: signed short\n");
    printf("Con rango: %d - %d\n\n", SHRT_MIN, SHRT_MAX);
}

void Es_unsigned_short(void){
    printf("La variable actual es: unsigned short\n");
    printf("Con rango: %d - %d\n\n", 0, USHRT_MAX);
}

void Es_signed_long(void){
    printf("La variable actual es: signed long\n");
    printf("Con rango: %x - %x\n\n", LONG_MIN, LONG_MAX);
}

void Es_unsigned_long(void){
    printf("La variable actual es: unsigned long\n");
    printf("Con rango: %d - %x\n\n", 0, ULONG_MAX);
}

   /*
    Se intentó hacer una función que recibiera las variables y determinara los rangos de la misma. 
    Al solicitar la función un tipo de dato como paramétro existió un fallo en la lógica, donde 
    todo el tiempo  a la salida se obtenia el tipo de dato y el rango de el parametro con el que se construyó la función, 
    por lo cual se opto por eliminar la función y utilizar un macros al inicio donde se hiciera referencia a la nueva
    variable que se iba a analizar en el código.

    Se probó también analizar cada tipo de dato y analizar lo que sucedia al asignar a la 
    variable el numero máximo que soportaba su tipo de dato y después aumentas su valor en 1. 
    El resultado es que a al aumentar en 1 el valor maximo de las variables de tipo unsigned, se vuelve al valor 0
    Al aumentar en 1 el valor maximo de las variables de tipo signed, el valor se vuelve el menor numero negativo que el
    tipo de datogit puede albergar
   */