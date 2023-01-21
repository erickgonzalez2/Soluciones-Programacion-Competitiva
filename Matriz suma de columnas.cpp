#include <iostream>

using namespace std;

main(){
	int matriz[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cin>> matriz[i][j];
		}
	}
	//derecha
	for(int i=0;i<1;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
	}
}
//abajo
for(int i=1;i<3;i++){
		for(int j=2;j<3;j++){
			cout<<matriz[i][j]<<" ";
	}
}

//izquierda
for(int i=2;i<3;i++){
		for(int j=1;j>=0;j--){
			cout<<matriz[i][j]<<" ";
	}
}


//ultimo
for(int i=1;i<2;i++){
		for(int j=0;j<=1;j++){
			cout<<matriz[i][j]<<" ";
	}
}
	return 0;
}
