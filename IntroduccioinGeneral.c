/*
	Escriba de nuevo el programa de conversión de temperatura de
	la sección 1.2, de modo que utilice una función para la conversión
*/
  

#include <stdio.h>

void ConversionC_F(int C, int up, int step);	


void main()
{
	int C;
    int minimo, maximo, paso;

    minimo=0; //Limite inferior de la tabla
    maximo=160; //Limite superior 
    paso= 20; //tamaño del incremento
    C=minimo;

	
    ConversionC_F(C, maximo, paso);


}

void ConversionC_F(int C, int up, int step){
	int F; 

	printf("Celsius\tFahrenheit \n");
	while (C<=up){
		F=((C/5)*9)+32;
		printf("%3d\t%7d\n", C, F);
		C= C+ step;
	}
	//return F;
}

/*
	- Una función es una forma conveniente de encapsular algunos cálculos, 
		que se pueden emplear después sin preocuparse de su implantación
	-Es suficiente saber qué se hace (no necesariamente como).
	-Es común ver una función corta definida y empleada una sola vez, únicamente
		porque eso esclarece alguna parte del código
	-Las definiciones de función pueden aparecer en cualquier orden y en uno o varios
		archivos fuente
	-Los nombres que emplea power para sus parámetros son locales a la función
	-"PARAMETRO" una variable nombrada en la lista entre paréntesis de la definición de una función
	-"ARGUMENTO" valor empleado al hacer la llamada de la función
	-Función prototipo
*/

