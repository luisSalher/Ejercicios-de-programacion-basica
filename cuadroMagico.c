#include <stdio.h>

int main (){
  
  int n;
    puts("Introduce n");
    scanf("%d", &n);  
  
  int i=1;
  int r=0;
  int c=((n-1)/2);
  int m[21][21];
  
   
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
 /*Imprimir la matriz*/

   for(r=0; r<n; r++){
      for(c=0; c<n; c++)
         printf("%d\t", m[c][r]);
      printf("\n\n");
      
   }


}//Fin de main
