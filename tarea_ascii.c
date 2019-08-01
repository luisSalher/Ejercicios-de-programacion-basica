/*Hacer un programa que solicita al usuario un carácter, y diga si es una letra mayúscula, 
una minúscula, un dígito, o ninguno de los anteriores.
Salinas Hernandez Luis Angel 1CM4*/

#include <stdio.h>
int main() {
char n; //caracter
  	puts("************************************************************************");
	puts("Programa que recibe un caracter e imprime si este es una letra mayuscula, minuscula o un numero");
	puts("Introduce un caracter:");
		scanf("%c", &n);
			if(n>='A')
				if(n<='Z')
					puts("El caracter introducido es una letra Mayuscula");
					else
						if(n>='a')
							if(n<='z')
								puts("EL caracter introducido es una letra Minuscula");
							else
								puts("1 Error El caracter no es un numero ni una letra");
						else
							puts("2 Error El caracter no es un numero ni una letra");
			else
				if(n>=48 && n<=57)
					puts("El caracter introducido es un numero");
				else
					puts("3 Error El caracter no es un numero ni una letra");
return 0;
}
