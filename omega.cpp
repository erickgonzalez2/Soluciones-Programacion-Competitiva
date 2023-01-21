#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	cin>>n;
	
	int matriz[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			cin>>matriz[i][j];
		}
	}
	
	int sum =0;
	
	for(int i=0,j=0;i<n,j<n;i++,j++){
		sum+=matriz[i][j];
	}
	cout<<sum<<'\n';
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			cout<<matriz[i][j]<<" ";
		}
		cout<<'\n';
	}
	
	
}
