/*Funcion de Fibonacci*/
#include <stdio.h>
int fib(int);

int main (){
int n;
printf("Dame un entero\n");
scanf("%d",&n);
printf("%d es: %d\n",n,fib(n)); 

return 0;
}

int fib(int n){
	if(n==0)
	    return 0;
	else
		if(n==1)
		  return 1;
		else
			return fib(n-1)+fib(n-2);
	}
