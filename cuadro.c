//Cuadro magico

#include <stdio.h>
#define lado 21 

void magico (int[][lado], int);
void escribir (int[][lado], int);

int main (){

  int n;
  int m[lado][lado];

	  puts("Dame un numero impar");
	  scanf("%d",&n);
	  magico(m,n);
	  escribir(m,n);


	return 0;
}

//FUNCION PARA HACER EL CUADRO
void magico (int m[][lado], int n){

  int i=1;
  int r=0;
  int c=((n-1)/2);
  
  
    for( ; i<=(n*n); i++){
       m[c][r]=i;

      r--; c++;
      if((r<0) && (c<n))
         r=n-1;
      else
         if((r<n && r>=0 && c>=n))
            c=0;
         else
            if(m[c][r]){
               r+=2; c--;
               }
            else
               if((r<0) && (c>=n)){
                 r+=2; c--;
                 }
    }
}

//FUNCION PARA IMPRIMIR LA MATRIZ
void escribir (int m[][lado], int n){

int r,c;	
   for(r=0; r<n; r++){
      for(c=0; c<n; c++)
         printf("%d\t", m[c][r]);
      printf("\n\n");  
   }
}








