#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m;
	
	int t;
	
	cin>>t;
	
	while(t--){
		
		cin>>n>>m;
		int x;
		char matriz[n][m];
		memset(matriz,'.',sizeof(matriz));
		
		for(int i=0;i<m;i++){
			cin>>x;
			
			int it=0;
			int limit = n-1;
			while(it<x){
				matriz[m][limit]='*';
				limit--;
				it++;
			}
			
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<matriz[i][j];				
			}
			
		}
		
		
		
	}
	
	
	
	
}
