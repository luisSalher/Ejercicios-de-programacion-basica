/*Definir una función que reciba una cadena con digitos y devuelva la cantidad que representa esa cadena*/

//como se lee una cadena

#include <stdio.h>

int myatoi(char * cadena){

	int i;
	int r=0;

	for(i=0; cadena[i]!='\0'; i++)
		r=r*10+cadena[i]-'0';

	return r;
}

int main (){

	char cadena[8];
	int j=myatoi(cadena);

	puts("Dame una cadena!\n");
	gets(cadena);
	printf("La cadena es: %d\n",j);
	printf("Prueba cadena*2= %d\n", j*2);

	return 0;
}