#include <bits/stdc++.h>

using namespace std;

vector<vector<long long int>>grafo;

long long int dfs_num[1000000];

long long int sum = 0;

void dfs(long long int u,long long int p){
	
	dfs_num[u] = 1;
	sum++;
	
	for(long long int z = 0;z < grafo[u].size(); z++){
		
		long long int v = grafo[u][z];
			
		if(dfs_num[v] == 0 && v>p){
			
			dfs(v,p);
			
		}
		
		
	}
	
	
}




int main(){
	
	int nodes,edges;
	
	long long int a,b;
	
	cin>>nodes>>edges;
	
	grafo.assign(nodes,vector<long long int>());
	
	while(edges--){
		
		cin>>a>>b;
		
		grafo[a].push_back(b);
		grafo[b].push_back(a);
		
		
	}
	
	long long int h;
	
	cin>>h;
	
	long long int k = 1;
	
	for(long long int i=0;i<nodes; i++){
		
			memset(dfs_num,0,nodes);
			sum = 0;	
			dfs(0,k);			
		
		if(sum<=h){
			break;
		}
		
		else k++;
	}
	
	cout<<k<<'\n';
	
	
	
	
	
	
	
}
