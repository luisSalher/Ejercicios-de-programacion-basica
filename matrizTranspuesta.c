/*Recibe dos matrices y en la segunda guarda la matriz transpuesta de la primera*/

#include <stdio.h>
#define LADO 100
  
void recibir (int [][LADO],int,int);
void imprimir (int [][LADO],int,int);
void trans (int[][LADO],int,int,int[][LADO]);

int main()
{
  int m[LADO][LADO];
  int m2[LADO][LADO],r,c;
   
  puts("Dame r y c");
  scanf("%d %d",&r,&c);     
        recibir(m,r,c);
        imprimir(m,r,c);
        trans(m,r,c,m2);
        imprimir(m,r,c);
           
  return 0;
}

void recibir(int m[][LADO],int r, int c){
  int i,j;
  for (i=0; i<r; i++)
      {
       printf("Dame los %d datos de la fila %d: ",c,i+1);
       for (j=0;j<c;j++)
           scanf("%d",&m[i][j]);
      }
}
  
  
void imprimir(int m[][LADO],int r,int c){
 int i, j;
 printf("\nEsta matriz es:\t \n");
 for (i=0;i<r;i++)
 {
  for (j=0;j<c;j++)
      printf("%d  ", m[i][j]);
      printf("\n");
  }
}

void trans (int m[][LADO], int r, int c, int m2[][LADO]){
  int i,j;
  
  for (i=0;i<r;i++){
    for (j=0;j<c;j++){
          m2[j][i]=m[i][j];
    }
  }
  
}



















