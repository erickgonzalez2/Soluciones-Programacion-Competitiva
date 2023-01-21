#include <iostream>
using namespace std;
 
int main(){
 int x,filas,columnas,sum=0,y,sumdig=0; 
  int matriz[100][100]={0};
 cin>>filas >> columnas;
 for(int i=0;i<filas;i++){
 	y++;
 	for(int j=0;j<columnas;j++){
 	x++;
 	sum=sum+x;
 	matriz[i][j]=+x;	
 	cout<<matriz[i][j]<<"  ";
	 }
	 y=+x;
	 sumdig=sumdig+y;
	 cout<<'\n';
 }
 cout<< "La suma de la matriz es  "<<sum;
 cout<<"\nLa suma de la diagonal es "<<sumdig;
 return 0;
}
