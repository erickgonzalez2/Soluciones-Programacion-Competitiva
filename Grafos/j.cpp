#include <iostream>
using namespace std;
int main(){
	
	int matriz[6][4] = {0};
	matriz[3][0]= 3;
	
	for(int i = 0; i<6;i++){
		
		for(int j = 0;j < 4 ; j++ ){
			cout<<matriz[i][j]<<" ";
		}
		cout<<'\n';
	}
}
