/*Ordenamiento por Inserción*/

#include <stdio.h>
#define LADO 10
void recibir(int[LADO],int);
void imprimir(int[LADO],int);
void ordins(int[LADO],int);


int main (){

int m[LADO],n,repetir=1;

  while(repetir){
  	  puts("*****************************");
	  puts("Dame el tamaño del arreglo");
	  scanf("%d",&n);
	  recibir(m,n);
	  imprimir(m,n);	  
	  ordins(m,n);
	  imprimir(m,n);
	  puts("Si quieres repetir presiona un numero diferente a 0");
	  scanf("%d",&repetir);
  }
  
  return 0;
}

void ordins(int m[LADO], int n){
 
      int i,j,v;
 
      for (i=1; i<n; i++){
             v=m[i];
             j=i-1;
             while(j>=0 && m[j]>v){
                  m[j+1]=m[j];
                  j--;
             }
             
             m[j+1]=v;
      }   
}
  
void recibir(int m[LADO],int n){
  int i;
       printf("Dame los enteros\n");
       for (i=0;i<n;i++)
           scanf("%d",&m[i]); 
      
}
 
 
void imprimir(int m[LADO],int n){
 int j;
 printf("\nEsta arreglo es:\t \n");
  for (j=0;j<n;j++)
      printf("%d  ", m[j]);
      printf("\n");
  
}


