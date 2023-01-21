#include <iostream>
using namespace std;
int main(){
	int f,x;
	cin>>f;
	int matriz[100][100]={0};
	//lectura de datos
	for(int i=0;i<f;i++){
		for(int j=0;j<f;j++){
			cin>>x;
			matriz[i][j]=x;
		}
	}
	f=f-1;
	//impresion de datos
	for(int i=0;i<=f;i++){
		for(int j=f;j>=0;j--){
			cout<<" "<< matriz[j][i];
		}
		cout<<'\n';
	}
	return 0;
}
