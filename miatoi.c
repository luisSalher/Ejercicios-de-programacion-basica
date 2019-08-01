/*Definir una función que reciba una cadena con digitos y devuelva la cantidad que representa esa cadena*/

#include <stdio.h>
int myatoi(char[]);
int bintodec (char[]);

int main (){
   int m;
   char cadena[8];
   
   puts("Si quieres convertir una cadena a entero presiona 0\n Si quieres convertir de decimal a binario presiona otro caracter");
   scanf("%d",&m);

      if(m==0){
         puts("Dame una cadena");      
         scanf("%s",cadena); //lee string, no usamos & porque la cadena ya representa una direccion
         int j=myatoi(cadena);
          	printf("La cadena es: %d\n",j);
        	  printf("Prueba cadena*2= %d\n", j*2);
      }
      else{
         puts("Dame un numero binario");
         scanf("%s",cadena); 
         int j=bintodec(cadena);
            printf("Tu numero en decimal es: %d\n",j);
      }

    return 0;
}

//myatoi

int myatoi(char cadena[]){

   int i;
   int r=0;

	for(i=0; cadena[i]!='\0'; i++)
		r=r*10+cadena[i]-'0';

	return r;
}

/*myatoi2
int myatoi2(char cadena[]){

   int i;
   int r=0;

	for(i=0; *(cadena+i)!='\0'; i++)
		r=r*10+ *(cadena+i)-'0';

	return r;
}*/

//bintodec
int bintodec(char cadena[]){

   int i;
   int r=0;

  for(i=0; *(cadena+i)!='\0'; i++)
    r=r*2+ *(cadena+i)-'0';

  return r;

}
