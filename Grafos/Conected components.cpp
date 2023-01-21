#include <bits/stdc++.h>

using namespace std;

vector < vector <int>> grafo;
vector <int> dfs_num;


void dfs(int u){
	
	dfs_num[u] = 1;
	
	for(int j=0; j< grafo[u].size();j++){
		
		int v = grafo[u][j];
		
		if(dfs_num[v]==0){
			
			dfs(v);
			
			
		}
		
	}
	
	
	
	
}


int main(){
	
	int nodes,edges;
	int a,b;
	
	cin>>nodes>>edges;
	
	grafo.assign(nodes+1,vector<int>());
	dfs_num.assign(nodes+1,0);
	
	while(edges--){
		
		cin>>a>>b;
		
		grafo[a].push_back(b);
		grafo[b].push_back(a);
		
	}
	
	int cc = 0;
	
	for(int i=1;i<=nodes;i++){
		
		if(dfs_num[i]==0){
			
			dfs(i);
			cc++;
		}
		
		
	}
	
	cout<<cc<<'\n';
	
		
	
}
