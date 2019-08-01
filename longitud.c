/*Definir una funcion que reciba una cadena y devuelva su longitud sin contar NULL*/

#include <stdio.h>
int longitud (char[]);

int main (){

int j;
int repetir=1;
char cadena [8];
	while(repetir){
		puts("*********************************");
		printf("Dame una cadena ");      
	    scanf("%s",cadena);
	    j=longitud(cadena);
	    printf("El numero de elementos de tu cadena es: %d\n",j);
	    puts("Si quieres repetir presiona un numero disitnto a 0");
	    scanf("%d",&repetir);
	}
	puts("Gracias");

	return 0;
}

//Función
int longitud (char cadena[]){
   int i;
   int r=0;

	for(i=0; cadena[i]!='\0'; i++)
		//r=r*10+cadena[i]-'0';
		r++; //El contador llega hasta ser igual a NULL y el valor de r se incrementa por 1

	return r;

}
