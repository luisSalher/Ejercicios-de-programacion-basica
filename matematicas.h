/*Matematicas.h*/

typedef struct { int ent;
		 int num;
	         int den;
			} Fracc; 

Fracc leefracc();
Fracc mult(Fracc, Fracc);
Fracc div(Fracc, Fracc);
Fracc suma(Fracc, Fracc);
Fracc resta(Fracc, Fracc);
Fracc reduce(Fracc);
Fracc extiende(Fracc);
void imfracc(Fracc);


Fracc leefracc() {
	Fracc a;
	
	printf("Introduce el entero, numerador, denominador: ");
	scanf ("%d %d %d", &a.ent, &a.num, &a.den);
	
	return a;
	
}

void imfracc(Fracc c) {

	printf("%d %d/%d\n", c.ent, c.num, c.den);
	
}

Fracc reduce(Fracc a) {	
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

Fracc extiende(Fracc a) {
    a.num = (a.ent*a.den)+a.num;
	a.ent = 0;
    a.den = a.den;
	
	return a;
}

Fracc suma(Fracc a, Fracc b) {
	Fracc c;
	a=extiende(a);
	b=extiende(b);
	c.ent = 0;
    c.den = a.den*b.den;
    c.num = (a.num*b.den)+(a.den*b.num);
    
	c = reduce(c);
	
	return c;
	
}

Fracc resta(Fracc a, Fracc b) {
	Fracc c;
	a = extiende(a);
	b = extiende (b);
	c.ent = 0;
    c.den = a.den*b.den;
    c.num = (a.num*b.den)-(a.den*b.num);
    
	c = reduce(c);
	
	return c;
}

Fracc mult(Fracc a, Fracc b) {
	Fracc c;
	a = extiende(a);
	b=  extiende(b);
	c.num = a.num * b.num;
	c.den = a.den * b.den;
	c.ent = 0;
	
	return reduce(c);
}

Fracc div(Fracc a, Fracc b) {
	Fracc c,d,e;
	
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
