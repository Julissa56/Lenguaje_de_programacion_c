/*El siguiente programa cuenta espacios en blanco, tabuladores, nuevas líneas a la entrada. 
   
    Escriba un programa que copie su entrada a la salida, reemplazando cada cadena de uno 
        o más blancos por un solo blanco.
    
    Escriba un programa que copie su entrada a la salida, reemplazando cada tabulación por \t, 
        cada retroceso por \b y cada diagonal invertida por \\. Esto hace que las tabulaciones y 
        los espacios sean visibles sin confusiones. □*/
  

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int c, e_blanco=0, tab=0, n_linea=0, flag_b=1;
	int borrado_b=0;

	while((c=getchar())!=EOF){

		switch(c){
			case ' ': 
				++e_blanco; 
				if(flag_b==1){
					printf("%c", c);
				}
				flag_b=0;
			break;

			case '\b':
				printf("%ct", 92);
				flag_b=1;
			break;

			case 92:
				printf("%c%c", 92, 92);
				flag_b=1;
			break;

			case '\t': 
				++tab; 
				printf("%ct", 92);
				flag_b=1;
			break;

			case '\n': 
				++n_linea;
				printf("%c", c);
				flag_b=1; 
			break;

			default: 
				printf("%c", c);
				flag_b=1; 
			break;
		} 
	}
	printf("Espacios en blanco en texto original: %d\n", e_blanco- borrado_b);
	printf("Tabuladores: %d\n", tab);
	printf("Renglones: %d\n", n_linea);
}

//printf("Numero de lineas: %d\n", n_linea);   
//printf("Numero de tabulaciones: %d\n", tab); 
//printf("Numero de blancos: %d\n", blanco);  
/*
--Un carácter escrito entre apóstrofos representa un valor entero igual al valor
    numérico del carácter en el conjunto de caracteres de la máquina
-- por ejemplo 'A' es una constante de carácter  
--Las secuencias de escape que se utilizan en constantes de cadena también 
    son legales en constantes de carácter
--Contar líneas es solamente contar caracteres nueva línea
*/


