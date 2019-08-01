/*Maximo comun divisor*/
#include <stdio.h>
int mcd(int, int);
int rmcd(int, int);
int mcm(int, int);
void swap(int, int);

int main (){
	int a,b;

	puts("Dame dos enteros");
	scanf("%d %d",&a,&b);
	printf("El MCM de %d y %d es %d\n",a,b,mcm(a,b));
	
	return 0;
}

int mcd (int a, int b) {
	int r=0;
	
	while(b!=0) {
		r = a%b;
		a=b;
		b=r;
	}
	return a;
}

int rmcd(int a, int b){
	if(a<b)
		return rmcd(b,a);
	else 
		if(a==b)
			return b;
		else 
			return rmcd(a-b,b);
}

int mcm(int a, int b){
	int c;

	c=(a*b)/(rmcd(a,b));

	return c;

}

/*int mcd (int a, int b){
	while(a!=b){
		if(a<b)
			swap(a,b);
		else
			a=a-b;
	}
}

void swap(int a, int b){
  int t=a;
  a=b;
  b=t;

}*/