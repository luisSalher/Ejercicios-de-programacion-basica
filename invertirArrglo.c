/*Hacer una funcion que reciba un arreglo e invierta los valores*/

#include <stdio.h>
#define LADO 10
void recibir(int[LADO],int);
void imprimir(int[LADO],int);
void invierte(int[LADO],int);
void swap(int[],int[]);
int *rinvierte(int[],int);
void corrimiento(int[],int);

int main(){
  int n,m[LADO];
      puts("Dame el tamaño del arreglo");
      scanf("%d",&n);
      recibir(m,n);
      imprimir(m,n);
      rinvierte(m,n);
      corrimiento(m,n);
      imprimir(m,n);
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


void swap(int*n1, int*n2){
  int t=*n1;
  *n1=*n2;
  *n2=t;

}


void invierte (int m[LADO],int n){
  int i=0,j=n-1;  

    while(i<j)
      swap(m+i++,m+j--);
      
}


//RECURSIVA
int *rinvierte(int m[LADO], int n){
  int t;

  if(n==1)
    return m;
  else{
      corrimiento(rinvierte(m+1,n-1),n-1);
      *(m+n+1)=t;
      return m;
  }
  
}

void corrimiento(int m[], int n){
  int i=0;
  int t=m[i];

  for(i=0;i<=n;i++)
    m[i]=m[i+1]; //recorre cada valor una posición a la izquierda
    m[n-1]=t; //Pone en la ultima posición el elemento que se encontraba en la primera
}