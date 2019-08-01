/*Multiplicar matrices*/
#include <stdio.h>
#define LADO 3

void recibir ( int A[LADO][LADO]);
void imprimir (int A[LADO][LADO]);
void multiplicar (int A[LADO][LADO],int B[LADO][LADO],int C[LADO][LADO]);

int main()
{
  int A[LADO][LADO],B[LADO][LADO],C[LADO][LADO];
      
      puts("Para matriz 1");
        recibir(A);
        imprimir(A);

      puts("****************");
      puts("Para matriz 2");
        recibir(B);
        imprimir(B);
      
      puts("Matriz resultante");
        multiplicar(A,B,C);
        imprimir(C);

  return 0;
}



void recibir(int A[LADO][LADO])
{
  int i,j;
  for (i=0; i<LADO; i++)
      {
       printf("Dame los %d datos de la fila %d: ",LADO,i+1);
       for (j=0;j<LADO;j++)
           scanf("%d",&A[i][j]);
      }
}


void imprimir(int A[LADO][LADO])
{
 int i, j;
 printf("Esta matriz es:\t \n\n");
 for (i=0;i<LADO;i++)
 {
  for (j=0;j<LADO;j++)
      printf("%d  ", A[i][j]);
      printf("\n");
  }
}


//Funcion para multiplicar las matrices
void multiplicar (int A[LADO][LADO],int B[LADO][LADO],int C[LADO][LADO])
{
 int i,j,k;
 for (i=0;i<LADO;i++)
     for(j=0;j<LADO;j++)
      {   C[j][i] = 0;
          for(k=0;k<LADO;k++)
              C[j][i] = C[j][i] + A[j][k] * B[k][i];
      }
 }