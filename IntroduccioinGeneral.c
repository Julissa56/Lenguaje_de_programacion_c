/*
	1.10 Variables externas y alcance
	imprime la línea de entrada más larga; versión especializada
*/
  

#include <stdio.h>
#define MAXLINE		1000						//Tamaño máximo de la linea de entrada
int max;
char line[MAXLINE];
char mayor[MAXLINE];



int obtener_linea(void);				//Funciones prototipo
int copiar(void);						//Modifican la cadena y devuelve el subindice de la ultima posicion escrita


int agregar(char anterior[], char nueva[]);
void reverse(int bandera, char msg[], int ultimo);


void main()
{
	int longitud; 
	extern int max;
	extern char mayor[MAXLINE];

	while((longitud=obtener_linea())>0){		//Obtiene la longitud de la linea
		
		if(longitud > max){				
			max=longitud;
			copiar();
		}
	}

	if(max>0){
		printf("%s", mayor);
	}

}


int obtener_linea(void){				//Lee una linea en s y regresa su longitud
	int c, i;
	extern char line[];

	for(i=0; i< MAXLINE-1 && (c=getchar())!= EOF && c!='\n'; ++i ){
		line[i]=c;
	}

	if(c=='\n'){
		line[i]=c;
		++i;
	}

	line[i]= '\0';
	return i;
}

int copiar(void){							//Copia 'from' en 'to'
	int i=0;
	extern char line[], mayor[];

	while((mayor[i]=line[i]) != '\0'){
		++i;
	}
	return i;
}


/*
	-Las variables que están en main son privadas
	o locales a ella, Ninguna otra función puede tener acceso directo a ellas
	(Aplica para variables de otras funciones)
	-Cada variable local de una función comienza a existir
	sólo cuando se llama a la función, y desaparece cuando la función termina (variables automáticas)
	-No retienen sus valores entre dos llamadas sucesivas, y deben ser inicializadas explícitamente 
	en cada entrada. De no hacerlo, contendrán “basura”.

	-Variables externas: variables a las que toda función
	puede tener acceso por su nombre
	- éstas pueden ser usadas en lugar de listas de argumentos para comunicar datos entre funciones. 
	-se mantienen permanentemente en existencia
	-mantienen sus valores aun después de que regresa la función que los fijó.
	-Debe definirse una vez fuera de cualquier función y declararse en cada función que desee tener acceso a ella
	- La declaración debe ser una proposición extern explíciia
	-Si la definición de una variable externa ocurre dentro del archivo fuente no es necesario el uso de una 
	declaración extern dentro de la función
	-Se reunen declaraciones extern de variables y funciones en un archivo separado, llamado header  incluido por #include
	-El sufijo .h se usa por convención para nombres de headers. 	
*/

