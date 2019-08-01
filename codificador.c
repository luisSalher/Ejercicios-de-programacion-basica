/*Codificador BCD 7 segmentos usando compuertas
le pide al usuario un valor y regresa los segmentos que se encienden*/

#include <stdio.h>
int y(int, int);
int o(int, int);
int n(int);
int oe(int, int);
int sa(int,int,int,int);
int sb(int,int,int,int);
int sc(int,int,int,int);
int sd(int,int,int,int);
int se(int,int,int,int);
int sf(int,int,int,int);
int sg(int,int,int,int);
int imprimir(int,int,int,int);
int display(int, int, int, int);

int main(){

 int a,b,c,d;
 int repetir=1;

 while(repetir){
	puts("Dame cuatro valores binarios");
	scanf("%d %d %d %d",&a,&b,&c,&d);
		imprimir(a,b,c,d);  display(a,b,c,d);
		puts("\nSi quieres repetir presiona cualquier numero distinto a 0");
		scanf("%d",&repetir);									
	}
	puts("Gracias");
  return 0;
}


//Funcion de AND
int y(int a, int b)	{return a&b;  }
//Funcion de OR	
int o(int a, int b)	{return a|b;  }	
//Funcion de NOT
int n(int a)	{return !a;  }
//Funcion de XOR
int oe (int a,int b){
 return o(y(n(a),b),y(a,n(b)));
}

//Funcion de segmento a
int sa(int a, int b, int c, int d){
	return o(o(c,a) , o( y(d,b) ,y(n(d),n(b))));
}
//Funcion de segmento b
int sb(int a, int b, int c, int d){
	return o(o(n(b), y(n(c),n(d))) ,y(c,d));
}
//Funcion de segmento c
int sc(int a, int b, int c, int d){
	return o(o(b,n(c)),d);
}
//Funcion de segmento d
int sd(int a, int b, int c, int d){
	return o(o(y(n(b),n(d)),y(y(b,n(c)),d)),o(y(c,n(d)), y(y(n(a),n(b)),c)));
}
//Funcion de segmento e
int se(int a, int b, int c, int d){
	return o(y(n(b),n(d)),y(c,n(d)));
}
//Funcion de segmento f
int sf(int a, int b, int c, int d){
	return o(o(a,y(b,n(c))),o(y(n(c),n(d)),y(y(n(a),b),n(d))));
}
//Funcion de segmento g
int sg(int a, int b, int c, int d){
	return o(o(a,y(c,n(d))),o(y(c,n(b)),y(n(c),b)));
}
//Funcion para imprimir los resultados
int imprimir(int a, int b, int c, int d){
	printf("Los valores de cada segmento son a:%d b:%d c:%d d:%d e:%d f:%d g:%d\n,",sa(a,b,c,d), sb(a,b,c,d), sc(a,b,c,d), sd(a,b,c,d), se(a,b,c,d), sf(a,b,c,d), sg(a,b,c,d));
	return 0;
}
//Funcion Display
int display (int a, int b, int c, int d){

		if (sa(a,b,c,d)==1)
			printf("****");	
		if (sb(a,b,c,d)==1 && sf(a,b,c,d)==1){
			printf("\n*   *\n*   *");}	
		else{
			if (sf(a,b,c,d)==1)
				printf("\n*\n*");
			  if (sb(a,b,c,d)==1)
				printf("\n    *\n    *");
		}		  
		if (sg(a,b,c,d)==1)
			printf("\n ****");	
		if (sc(a,b,c,d)==1 && se(a,b,c,d)==1){
			printf("\n*   *\n*   *");}
		else{
			if(sc(a,b,c,d)==1)
				printf("\n    *\n    *"); 	
			if(se(a,b,c,d)==1)
				printf("\n*\n*");
		}
		if (sd(a,b,c,d)==1)
			printf("\n ****");								

	return 0;
}


