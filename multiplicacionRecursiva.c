/*Multiplicacion*/
#include <stdio.h>
int mult (int, int);
int suma (int, int);

int main(){
int a,b;
printf("Dame dos enteros!\n");
scanf("%d %d",&a, &b);
printf("El producto de %d y %d es %d\n",a,b,mult(a,b));

return 0;
}

int mult(int a, int b){
	if(a==0)
	   return 0;
	else
		if(b==0)
		 return 0;
		else
		 	if(a==1)
		 	   return b;
	    else
	    		return suma(b, mult(a-1,b));
}

int suma(int a, int b){
	if (a==0)
	    return b;
	else
		  return 1+suma(a-1,b);
		     
} 

