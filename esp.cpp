#include <iostream>
using namespace  std;
int main(){
	int n;
	cin>>n;
	int matriz[n][n];
	int i=0,j=0,aux=n,c=1,ax=0;
	int max=n*n;
	
	while(c!=max+1){
		//derecha
		for(j=ax;j<aux;j++){
			matriz[i][j]=c;
			c++;
		}
		//abajo
		for(i=ax+1;i<aux;i++){
			matriz[i][j-1]=c;
			c++;
		}
		//izquierda
		for(j=aux-1;j>ax;j--){
			matriz[i-1][j-1]=c;
			c++;
		}
		//arriba
		for(i=aux-1;i>ax+1;i--){
			matriz[i-1][j]=c;
			c++;
		}
		ax++;
		aux--;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<'\n';
	}
}
