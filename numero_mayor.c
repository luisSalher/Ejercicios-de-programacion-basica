#include <stdio.h>
#include <stdlib.h>
#define TAM 500
#define LADO 100
void imprimir(int[LADO],int);
void quick(int[],int,int);
void mayor(int[],int);

int main(){

	int n=LADO,m[n],i;

	//puts("Dame el tamaño del arreglo");
	//scanf("%d",&n);
	for(i=0;i<n;i++){
		m[i]=rand()%TAM+1;
	}
	imprimir(m,n);
	mayor(m,n);

	return 0;
}

void imprimir(int m[LADO],int n){
 int j;
 printf("\nEste arreglo es:\t \n");
  for (j=0;j<n;j++)
      printf("%d  ", m[j]);
      printf("\n"); 
}

void mayor(int m[LADO],int n){
	int a=0,j;

	for(j=0;j<n;j++)
		if(m[j]>a)
			a=m[j];
	printf("El numero mas grande del arreglo es: %d\n",a );

}