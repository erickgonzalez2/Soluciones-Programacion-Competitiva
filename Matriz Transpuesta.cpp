#include <iostream>
using namespace std;

int main(){
	int f,c;
	cin>>f>>c;
	int m[f][c];
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cin>>m[i][j];
		}
	}
	
	for(int i=0;i<c;i++){
		for(int j=0;j<f;j++){
			cout<<m[j][i]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
