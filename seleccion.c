/*Ordenamiento por seleccion*/

#include <stdio.h>
#define LADO 10
void recibir(int[LADO],int);
void imprimir(int[LADO],int);
void seleccion(int[LADO],int);

int main (){

  int n,m[LADO];
      puts("Dame el tamaño del arreglo");
      scanf("%d",&n);
      recibir(m,n);
      imprimir(m,n);  
      seleccion(m,n);
      imprimir(m,n);   

  return 0;
}


void recibir(int m[LADO],int n){
  int i;
       printf("Dame los %d enteros\n",n);
       for (i=0;i<n;i++)
           scanf("%d",&m[i]);
       
}
  
  
void imprimir(int m[LADO],int n){
 int j;
 printf("\nEste arreglo es:\t \n");
  for (j=0;j<n;j++)
      printf("%d  ", m[j]);
      printf("\n");
   
}

void seleccion(int m[LADO],int n){
 int minimo=0,i,j;
 int temp;
  for(i=0;i<n-1;i++){
     minimo=i;
     for(j=i+1;j<n;j++)
        if (m[minimo]>m[j]) {
           minimo=j;
          }
     imprimir(m,n);      
     temp=m[minimo];
     m[minimo]=m[i];
     m[i]=temp;
     imprimir(m,n);
  }
	   	
}

















