#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>grafo;

int main(){
	
	
	grafo.assign(10,vector<int>(1));
	
	grafo[2].assign(5,10);
	
	for(int i=0;i<4;i++){
		
		for(int j=0;j<grafo[i].size();j++){
			cout<<i<<" "<<j<<" ";
			cout<<grafo[i][j]<<'\n';
			
		}
		
	}
	
	
	
}
