/*
-El siguiente programa imprime el histograma de frecuencias con que se presentan diferentes 	
	caracteres leidos a su entrada. 
-Se toma la definicion de: 0 caracteres es "espacio en blanco", 1 caracter es "letra",
	2 o mas caraxteres son palabras.
-Letras mayusculas y minusculas entran en la misma categoria de frecuencias

Codigo ASCCI:
	65-90:	A-Z
	97-122: a-z
	48-57:	0-9
*/
  

#include <stdio.h>
#define MAX 	28		//Letras(0:A, 26:Z), numeros(1) y otro tipo de caracteres(1)
#define NUMERO	26
#define OTRO	27
#define FMIN 	1		//Frecuencia minima de lectura en consola

void main()
{

	/* VARIABLES */
	int c, i, j, caracter;
	int contador_caracteres[MAX];

	for (i = 0; i < MAX; ++i)
	{
		contador_caracteres[i]=0;
	}


	/* RECEPCIÓN DE CARACTER Y CONTEO */
	while ((c=getchar())!=EOF)
	{
		if(c>='A' && c<='Z'){					//Frecuencia de letras (mayuscula)
			++contador_caracteres[c- 'A'];
		}
		else if(c>='a' && c<='z'){				//Frecuencia de letras (minusculas)
			++contador_caracteres[c- 'a'];
		}
		else if(c>='0' && c<='9'){				//Frecuencia de numeros
			++contador_caracteres[NUMERO];
		}
		else{									//Freccuencias de otros caracteres
			++contador_caracteres[OTRO];
		}
	}


	/* IMPRESIÓN */
	printf("Histograma de frecuencia de caracteres: \n\n");

	
	for(i=0; i<NUMERO; ++i){					//Frecuencia de letras
		if(contador_caracteres[i]>= FMIN){
			printf("%4c |", i+65);
			for(j=FMIN; j<=contador_caracteres[i] ; j++){	
				printf("o");
			}
			printf("\n");
		}
	}
	
	printf(" Num |");							//Frecuencia de numeros
	for(j=FMIN; j<=contador_caracteres[NUMERO] ; j++){
		printf("o");
	}
	printf("\n");

	printf("Otro |");							//Frecuencia de otros
	for(j=FMIN; j<=contador_caracteres[OTRO] ; j++){
		printf("o");
	}
	printf("\n");

}

/*
-Es conveniente utilizar un arreglo para mantener el número de ocurrencias
	en lugar de tener diez variables individuales
-Num_digitos es un arreglo de 10 enteros
-Los subindices es lo que esta entre corchetes cuadrados
-los char son sólo pequeños enteros
-Las condiciones se evalúan hasta que alguna condicion se satisface
- Cuando se omiten el else y la proposición finales, no tiene lugar ninguna acción. 

*/

