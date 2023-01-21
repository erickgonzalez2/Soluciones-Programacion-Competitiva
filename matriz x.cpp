#include <iostream>
using namespace std;
int main(){
	int n,m,i,j;
	cin>>n>>m;
	int matriz[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>matriz[i][j];
		}
	}
	
	for(i=n-1;i>=0;i--){
		for(j=0;j<m;j++){
			if(i%2==0 && j%2==0)cout<<matriz[i][j]<<" ";
		}
	}
	cout<<'\n';
	return 0;
}
