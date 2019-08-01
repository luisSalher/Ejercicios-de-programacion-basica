/*Factorial*/
#include <stdio.h>

int main (){

  int n;
  int f=1;
  int i=1;
  
  puts("Dame un entero");
  scanf("%d",&n);
    while (i<=n){
    
      f=f*i;
      i++;
    }  
   printf("El factorial de %d = %d\n",n,f); 
}
