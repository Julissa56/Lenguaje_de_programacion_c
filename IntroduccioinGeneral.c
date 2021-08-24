/*El siguiente programa imprime el histograma de las longitudes
de las palabras de su entrada. 
Se toma la definicion de: 0 caracteres es "espacio en blanco", 1 caracter es "letra",
	2 o mas caraxteres son palabras.
*/
  

#include <stdio.h>
#define MAX 12		//Maximo de caracteres que consideraremos para una palabra
#define MIN 2		//Minimo de caracteres que debe tener una palabra

void main()
{
	int c, i, j, longitud;
	int num_letras[MAX];

	for (i = 0; i < MAX; ++i)
	{
		num_letras[i]=0;
	}

	while ((c=getchar())!=EOF)
	{
		if(c==' ' || c=='\t' || c=='\n' || c=='.' || c==','){
			
			if(longitud>=MIN){				//Significa que una palabra acabo y aun nos queda su longitud en memoria
				++num_letras[longitud-MIN];	
			}
			if(longitud>=MAX){
				++num_letras[MAX-1];
			}
			
			longitud=0;
		}
		else {
			++longitud;
		}
	}

	printf("Histograma de longitud de palabras: \n\n");

	
	for(i=0; i<MAX-1; ++i){
		printf("%2d |", i+2);
		for(j=1; j<=num_letras[i] ; j++){
			printf("o");
		}
		printf("\n");
	}
	
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

