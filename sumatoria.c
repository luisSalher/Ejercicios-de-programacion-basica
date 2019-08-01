/*FUNCIONES RECURSIVAS.- Programa que recibe un entero y regresa la sumatoria
La sumatoria de n es igual a 0 si y solo si n es igual a 0, si n es distinto a 0, su sumatoria es
n mas la sumatoria de n-1*/

#include <stdio.h>
int sumatoria(int); //solo recibe un argumento

int main (){
int x;
puts("Introduce un entero");
scanf("%d",&x);
printf("La sumatoria de %d es igual a:%d \n",x, sumatoria(x));

return 0;
}
//Definimos la funcion sumatoria 
int sumatoria(int n){
    if(n==0)
		return 0;
    else
		return n+sumatoria(n-1);
}

/*Llamamos a una funcion dentro de si misma para que se repitiera la instrucción hasta llegar a 0*/
