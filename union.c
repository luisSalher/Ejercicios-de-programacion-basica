#include <stdio.h>
#include <string.h>
#define TAM 20

union dato{
	int i;
	float f;
	char cad[TAM];
};

int main(){

	union dato a;

	printf("Tamaño en memoria de dato %lu\n",sizeof(a));

	a.i=10;
	printf("a.i: %d\n",a.i);
	a.f=220.5;
	printf("a.f: %f\n",a.f);
	strcpy(a.cad,"Programación 1");
	//printf("a.i: %d\n",a.i);
	//("a.f: %f\n",a.f);
	printf("a.cad: %s\n",a.cad);

	return 0;
}