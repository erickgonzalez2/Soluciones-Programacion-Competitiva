#include <iostream>

using namespace std;

main(){
	int matriza[3][3],matrizb[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>matriza[i][j];
		}
	}
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>matrizb[i][j];
		}
	}
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriza[i][j]*matrizb[i][j]<<" ";
		}
		cout<<'\n';
	}

}
