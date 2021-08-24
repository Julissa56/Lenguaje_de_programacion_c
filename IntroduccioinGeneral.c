/*El siguiente programa cuenta dígitos, espacios en blanco 
y otros caracteres 
*/
  

#include <stdio.h>

void main()
{
	int c, i, num_blancos, num_otros;
	int num_digitos[10];

	num_blancos=num_otros=0;

	for (i = 0; i < 10; ++i)
	{
		num_digitos[i]=0;
	}

	while ((c=getchar())!=EOF)
	{
		if(c>='0' && c<='9'){						//Determina si el caracter c es un digito
			++num_digitos[c-'0'];					//Valor numerico del digito
		}
		else if(c==' ' || c=='\n' || c=='\t'){
			++num_blancos;
		}
		else{
			++num_otros;
		}
	}

	printf("digitos: ");
	for(i=0; i<10; ++i){
		printf("%d ", num_digitos[i]);
	}

	printf(", espacios blancos: %d, otros:%d", num_blancos, num_otros);
	
	
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

