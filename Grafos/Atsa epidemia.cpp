#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>grafo;

vector <int>dfs_num;

int sum = 0;

void dfs(int u,int p){
	
	dfs_num[u] = 1;
	sum++;
	
	for(int z = 0;z < grafo[u].size(); z++){
		
		int v = grafo[u][z];
			
		if(dfs_num[v] == 0 && v>p){
			
			dfs(v,p);
			
		}
		
		
	}
	
	
}




int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);
	int nodes,edges;
	
	int a,b;
	
	cin>>nodes>>edges;
	
	grafo.assign(nodes,vector<int>());
	dfs_num.assign(nodes,0);
	
	while(edges--){
		
		cin>>a>>b;
		
		grafo[a].push_back(b);
		grafo[b].push_back(a);
		
		
	}
	
	int h;
	
	cin>>h;
	
	int k = 1;
	
	for(int i=0;i<nodes; i++){
		
			dfs_num.assign(nodes,0);
			sum = 0;	
			dfs(0,k);			
		
		if(sum<=h){
			break;
		}
		
		else k++;
	}
	
	cout<<k<<'\n';
	
	
	
	
	
	
	
}
