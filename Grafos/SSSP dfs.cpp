#include <bits/stdc++.h>

using namespace std;

vector < vector <int>> grafo; 
vector<int> dfs_num;
vector <int> dist;

void dfs(int u,int p){

	dfs_num[u] = 1;
	
	dist[u] = p;
	
	for(int j = 0; j<grafo[u].size() ; j++){
		
		int v = grafo[u][j];
		
		if(dfs_num[v]==0){
			
			dfs(v,dist[u]+1);
		}
		
	}

}

int main(){

	int nodes,edges,x,a,b,g;
	
	cin>>nodes;
	
	grafo.assign(nodes+1,vector<int>());
	dfs_num.assign(nodes+1,0);
	dist.assign(nodes+1,0);
	
		
	for(int i=1;i<nodes;i++){
		
		cin>>a>>b;
		grafo[a].push_back(b);
		grafo[b].push_back(a);
		
	}
	
	dfs(1,0);
	
	
	cin>>g;
	
	int min_dist = 10000000;
	int index = 0;
	
	while(g--){
		
		cin>>x;
		
		if(dist[x]<  min_dist){
			min_dist = dist[x];
			index = x;
		}
	}
	
	cout<<index<<'\n';
	
	
	
	
	
	
}
