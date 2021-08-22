/*El siguiente programa cuenta las líneas, 
palabras y caracteres  usando la definición de que 
una palabra es cualquier secuencia de caracteres que no 
contiene espacio en blanco ni tabulación ni nueva línea*/
  

#include <stdio.h>

#define IN	1	//dentro de una palabra
#define OUT 0	//fuera de una palabra

void main()
{
	int c, numCaracter, numPalabra, numLinea, state;

	state =OUT;
	numCaracter = numLinea = numPalabra =0;

	while((c=getchar())!=EOF){
		++numCaracter;
		if(c=='\n'){
			++numLinea;
		}
		if(c==' ' || c=='\n' || c=='\t'){
			state= OUT;
		}
		else if(state==OUT){
			state=IN;
			++numPalabra;	
		} 	 
	}
	printf("Lineas: %d	Palabras:%d  Caracteres:%d\n", numLinea, numPalabra, numCaracter);
	
}

/*
-Las constantes simbólicas IN y OUT hacen el programa más legible
-Las asignaciones se asocian de derecha a izquierda
- El operador ¡¡ significa “O”
-La precedencia del AND es mass grande que la del OR
-Las expresiones con AND o OR se evaluan de izquierda a derecha
*/

