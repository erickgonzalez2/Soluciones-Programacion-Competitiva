#include <iostream>
using namespace std;
int main(){
	int n,x=0,y;
 	int matriz [100][100]={0};
	cin>>n;
	int filas=n,columnas=n;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz[i][j]=x;
			cout<<matriz[i][j];
			x++;
		}
		x=x-2;
		cout<<'\n';
	}
	return 0;
}
