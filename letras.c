/*Función que reciba una letra mayúscula e imprima todas las mayusculas desde esa hasta la Z*/

#include <stdio.h>
void letras(char);
void ztoa(char);
void rztoa2(char);
void rletras2(char);
char rletras(char);

int main (){
	char letra;

	puts("Dame una letra mayúscula");
	scanf("%c",&letra); 
	rztoa2(letra);

	return 0;
}

//DE LETRA HASTA Z
void letras(char letra){
	char i;

	for(i=letra;i<='Z';i++)
		printf("%c\n",i);

}

//RECURSIVA
char rletras(char letra){
	if(letra == 'Z'){
		printf("%c\n",letra);
		return ;
	}
	else{
		printf("%c\n",letra);
		return rletras(letra+1);
	}

}
//DE Z HASTA LETRA
void ztoa(char letra){
	char i;

	for(i='Z';i>=letra;i--)
		printf("%c\n",i);

}

//RECURSIVA
void rztoa2(char letra){
	if(letra<='Z'){
		rztoa2(letra+1);
		putchar(letra);	
		printf("\n");	
	}
}

//UNA FUNCION QUE RECIBA DOS ENTEROS Y DEVUELVA EL MAXIMO COMUN DIVISOR CON EL ALGORITMO DE EUCLIDES