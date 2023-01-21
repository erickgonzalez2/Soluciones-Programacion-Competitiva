#include <stdio.h>
#include <conio.h>
using namespace std;
int main() {
   int i,j,k,n; // declarando las variables de la matriz
   float a[10][10],b,x[10];
   printf("\nIngresa el rango de la matriz: ");
   scanf("%d",&n);
   printf("\nIngresa los elementos de la matriz\n");
   for(i=1; i<=n; i++) {
      for(j=1; j<=(n+1); j++) {
         
         printf("A[%d,%d]: ",i,j);
        scanf("%f",&a[i][j]);
         
      }
   }
   //Encontrar los elementos de la matriz en diagonal
   for(j=1; j<=n; j++) {
      for(i=1; i<=n; i++) {
         if(i!=j) {
            b=a[i][j]/a[j][j];
            for(k=1; k<=n+1; k++) { 
               a[i][k]=a[i][k]-b*a[j][k];
            }
         }
      }
   }
  printf("\nLa solucion es: \n");
   for(i=1; i<=n; i++) {
      x[i]=a[i][n+1]/a[i][i];
      printf("x%d = %f \n",i,x[i]);
   }
   getch();
   return(0);
}
