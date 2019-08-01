/*Hacer un programa que calcule el numero de combinaciones que se pueden formar con 'n' elementos tomados de 'r' en 'r' (Combinación)*/

#include <stdio.h>
int combina (int, int);
int rfact (int);

int main (){

	int n,r;

	printf("Dame los numeros\n");
	scanf("%d %d", &n, &r);
	if(n>=r){
		printf("%d C %d=%d \n", n,r,combina(n,r));
	}
	else
		puts("Invierte los numeros");

	return 0;
}

int combina(int n, int r){
	return rfact(n)/(rfact(n-r)*rfact(r));
}

int rfact(int n){
	if(n==0)
	   return 1;
	else
	   return n*rfact(n-1);
}

