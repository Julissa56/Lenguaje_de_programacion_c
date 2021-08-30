/*
	 Escriba un programa que lea un conjunto de líneas de texto e imprima la de mayor longitud
*/
  

#include <stdio.h>
#define MAXLINE		1000						//Tamaño máximo de la linea de entrada


int obtener_linea(char line[], int maxline);			//Funciones prototipo
void copiar(char hacia[], char desde[]);	

void main()
{
	int longitud, max_lon=0;
	char line[MAXLINE];
	char longest[MAXLINE];

	while((longitud=obtener_linea(line, MAXLINE))>0){		//main y getline se comunican a traves de un par de argumentos y un valor de retorno
		if(longitud > max_lon){
			max_lon=longitud;
			copiar(longest, line);
		}
	}

	if(max_lon>0){	//Hubo una linea							
		printf("%s", longest);
	}
	
}

int obtener_linea(char string[], int limite){				//Lee una linea en s y regresa su longitud
	int c, i;

	for(i=0; i< limite-1 && (c=getchar())!= EOF && c!='\n'; ++i ){
		string[i]=c;
	}
	if(c=='\n'){
		string[i]=c;
		++i;
	}

	string[i]= '\0';
	return i;
}

void copiar(char to[], char from[]){					//Copia 'from' en 'to'
	int i=0;

	while((to[i]=from[i]) != '\0'){
		++i;
	}
}

/*
	-"PARAMETRO" una variable nombrada en la lista entre paréntesis de la definición de una función
	-"ARGUMENTO" valor empleado al hacer la llamada de la función
	-Función prototipo
	-La función que se invoca recibe los valores de sus argumentos en variables temporales y no en 
		las originales
	- La función que se invoca no puede alterar directamente una variable de la función que hace la 
		llamada; sólo puede modificar su copia privada y temporal.
	-Es posible hacer que una función modifique una variable dentro de una rutina invocada.
	-La función que llama debe proporcionar la dirección de la variable que será cambiada 
	-La función que se invoca debe declarar que el parámetro sea un apuntador y tenga acceso a 
		la variable indirectamente a través de él.

	-ARREGLOS: Cuando el nombre de un arreglo se emplea como argumento, 
	el valor que se pasa a la función es la localización o la dirección 
	del principio del arreglo 
	-No hay copia de los elementos del arreglo la función puede tener 
	acceso y alterar cualquier elemento del arreglo

	-EJERCICIO:
	-Getline tiene que regresar una señal acerca de la posibilidad de un fin de archivo
	-Deberá retornar la longitud de la línea, o cero si se encuentra el fin de archivo
	-El propósito de proporcionar el tamaño de un arreglo es fijar espacio de almacenamiento contiguo
	-Algunas funciones regresan un valor útil; otras, como copy, se emplean únicamente por su efecto 
	y no regresan un valor
	-El carácter '\0' marca el fin de la cadena de caracteres
*/

