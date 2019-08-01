/*Programa que ordena los elementos de un arreglo usando el algoritmo de ordenación por burbuja*/

#include <stdio.h>

int main (){

   int A[10];
   int i,j,t,n;
   
   for(i=0;i<10;i++){
      //puts("Dame 10 numeros");
      scanf("%d",&A[i]);
   }
   
   for(j=1;j<n;j++)
        for(i=n-1; i>=j; i--)
	    if(A[i] < A[i-1]){
   	       t=A[i]; A[i]=A[i-1];
   	       A[i-1]=t;
	    }//Fin de if
	
   for(i=0;i<10;i++)
     printf("%d",A[i]);
     
   return 0;  
}//Fin de main
