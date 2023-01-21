#include <bits/stdc++.h>

using namespace std;

vector <int> dfs_num;
vector <int> ts;
vector <vector <int>> grafo;

void dfs2(int u){
	dfs_num[u] = 1;
	
	for(int i = 0; i < grafo[u].size(); i++){
		
		int v = grafo[u][i];
		
		if(!dfs_num[v]){
			dfs2(v);
		}
	}
	ts.push_back(u);
	
}

int main(){
	
	int v,e;
	int a,b;
	
	cin>>v>>e;
	
	grafo.assign(v,vector<int>());
	dfs_num.assign(v,0);
	
	while(e--){
		
		cin>>a>>b;
		
		grafo[a-1].push_back(b-1);
		
	}
	
	for(int i = 0;i < v; i++){
		
		if(dfs_num[i] == 0){
			dfs2(i);
		}
		
	}
	
	for(int i = v-1;i>=0;i--){
		cout<<ts[i]+1<<" ";
	}
	
	
	
	
	
	
}
