#include <stdio.h>
#include <stdlib.h>
#define TAM 100
#define LADO 100
void imprimir(int[LADO],int);
void quick(int[],int,int);

int main(){

	int n=20,m[n],i;

	//puts("Dame el tamaño del arreglo");
	//scanf("%d",&n);
	for(i=0;i<n;i++){
		m[i]=rand()%TAM;
	}
	imprimir(m,n);
	quick(m,0,n-1);
	imprimir(m,n);

}

void imprimir(int m[LADO],int n){
 int j;
 printf("\nEste arreglo es:\t \n");
  for (j=0;j<n;j++)
      printf("%d  ", m[j]);
      printf("\n"); 
}

void quick (int m[LADO], int primero, int ultimo){
 int aux,i=0,j=0,pivote;
    i=primero;
    j=ultimo;
    pivote=m[(primero+ultimo)/2];
    
      while(i<=j){ 
        while((m[i]<pivote) && (j<=ultimo)){
                i++;
        }
         while((pivote<m[j]) && (j>primero)){
                j--;
         }
            
            if(i<=j){
              aux=m[i];
              m[i]=m[j];
              m[j]=aux;
              i++;
              j--;
            }
        }   
          if(primero<j)
           quick(m,primero,j);
              
          if(i<ultimo)
           quick(m,i,ultimo); 
    
}
