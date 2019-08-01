/* Definir una funcion que reciba dos fracciones y devuelva su producto */

#include <stdio.h>

typedef struct { int ent;
		 int num;
	         int den;
			} fracc; 

fracc leerfracc();
fracc multiplicacion(fracc, fracc);
fracc division(fracc, fracc);
fracc suma(fracc, fracc);
fracc resta(fracc, fracc);
fracc reduce(fracc);
fracc extiende(fracc);
int mcd (int,int);
void imfracc(fracc);

int main () {
	fracc a,b;
	a=leerfracc();
	b=leerfracc();

	printf("multiplicación: ");		imfracc(multiplicacion(a,b));
	printf ("division: ");		imfracc(division(a,b));
	printf ("Suma: ");		imfracc(suma(a,b));
	printf ("Resta: ");		imfracc(resta(a,b));
	
	return 0;	
}
	
fracc leerfracc() {
	fracc a;
	
	printf("Dame una fraccion: ");
	scanf ("%d %d %d", &a.ent, &a.num, &a.den);
	
	return a;
	
}

void imfracc(fracc c) {

	printf("%d %d/%d\n", c.ent, c.num, c.den);
	
}

fracc reduce(fracc a) {	
	if(a.num>a.den) {
	  a.ent = a.num/a.den + a.ent;
      a.num = a.num%a.den;
      a.den = a.den;
    }
    int n = mcd(a.num,a.den);
    a.num = a.num/n;
    a.den = a.den/n;
	return a;
}

fracc extiende(fracc a) {
    a.num = (a.ent*a.den)+a.num;
	a.ent = 0;
    a.den = a.den;
	
	return a;
}

fracc suma(fracc a, fracc b) {
	fracc c;
	a=extiende(a);
	b=extiende(b);
	c.ent = 0;
    c.den = a.den*b.den;
    c.num = (a.num*b.den)+(a.den*b.num);
    
	c = reduce(c);
	
	return c;
	
}

fracc resta(fracc a, fracc b) {
	fracc c;
	a = extiende(a);
	b = extiende (b);
	c.ent = 0;
    c.den = a.den*b.den;
    c.num = (a.num*b.den)-(a.den*b.num);
    
	c = reduce(c);
	
	return c;
}

fracc multiplicacion(fracc a, fracc b) {
	fracc c;
	a = extiende(a);
	b=  extiende(b);
	c.num = a.num * b.num;
	c.den = a.den * b.den;
	c.ent = 0;
	
	return reduce(c);
}

fracc division(fracc a, fracc b) {
	fracc c,d,e;
	
	c=extiende(a);
	d=extiende(b);
	
	e.ent = 0;
	e.num = (c.num*d.den);
	e.den = (c.den*d.num);
	
	e = reduce(e);
	
	return e;
	
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

	
	
