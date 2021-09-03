/*
	Ejercicio 1-19. Escriba una función reverse(s) que invierta la cadena
	de caracteres s.
	Usela para escribir un programa que invierta su entrada linea a linea.
*/
  

#include <stdio.h>
#define MAXLINE		1000						//Tamaño máximo de la linea de entrada
#define MIN			1							//Caracteres minimos para imprimir
#define FLINE		1							//Primera linea que cumple con el minimo de caracteres
#define MLINE		0							//Linea que cumple el minimo caracteres (no es la primera)




int obtener_linea(char line[], int maxline);				//Funciones prototipo
int copiar(char hacia[], char desde[]);						//Modifican la cadena y devuelve el subindice de la ultima posicion escrita
int agregar(char anterior[], char nueva[]);
void reverse(int bandera, char msg[], int ultimo);


void main()
{
	int longitud, max_lon=0, state=FLINE, i=0;
	int fin_msg;
	char line[MAXLINE];
	char mayor[MAXLINE];

	while((longitud=obtener_linea(line, MAXLINE))>0){		//Obtiene la longitud de la linea
		
		if((longitud > MIN) && (state==FLINE)){				//Si es la primer linea con el minimno de caracteres
			max_lon=longitud;
			fin_msg=copiar(mayor, line);
			state=MLINE;
		}
		else if((longitud> MIN) && (state ==MLINE)){		//Si no es la primer linea con el minimo de caracteres
			fin_msg=agregar(mayor, line);
		}
	}

	reverse(max_lon, mayor, fin_msg);

}


int obtener_linea(char string[], int limite){				//Lee una linea en s y regresa su longitud
	int c, i, blanco=0;

	for(i=0; i< limite-1 && (c=getchar())!= EOF && c!='\n'; ++i ){
		string[i]=c;
		
		if(c==' ' || c=='\t'){								//Si el ultimo caracter es un espacio en blanco
			++blanco;
		}
	else{													//Si el ultimo caracter no fue blanco, reinicio de variable
			blanco=0;
		}
	}

	i=i-blanco;

	if(c=='\n'){
		string[i]=c;
		++i;
	}

	string[i]= '\0';
	return i;
}

int copiar(char to[], char from[]){							//Copia 'from' en 'to'
	int i=0;

	while((to[i]=from[i]) != '\0'){
		++i;
	}
	return i;
}

int agregar(char anterior[], char nueva[]){					//Busca el final de la ultima linea escrita y continua escribiendo
	int i=0;
	int j=0;
	for(i=0; anterior[i]!='\0'; ++i){						//Encuentra donde acabo la ultima cadena
		;
	}

	//anterior[i]='\n';										//Reemplaza el fin de string por un salto de linea
	//++i;
    while((anterior[i]=nueva[j])!='\0'){					//Sigue escribiendo donde se quedó, hasta que encuentra el caracter fin de string
		++i;
		++j;
	}
	return i;
}

void reverse(int bandera, char msg[], int ultimo){			//Imprime la cadena de caracteres al reves linea por linea
	int i;
	if(bandera>0){											//Hubo una linea							
		for(i=ultimo-1; i>=0; --i){							
			printf("%c",msg[i]);
		}
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

