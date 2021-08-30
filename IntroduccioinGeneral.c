/*
	Escribir la función power(m,n), que eleva un entero m a una potencia entera y positiva n
*/
  

#include <stdio.h>

int power(int base, int n){
	int i, p;

	p=1;
	for(i=1; i<=n; ++i){
		p=p*base;
	}
	return p;
}

void main()
{
	int i;

	for(i=0; i<10; ++i){
		printf("%d  %d  %2d\n", i, power(2,i), power(-3,i));
	}


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

