#include <bits/stdc++.h>

using namespace std;

vector< vector <int>> grafo;
vector <int> dfs_num;

void dfs(int vtx){
	
	dfs_num[vtx] = 1;
	
	for(int j = 0; j<grafo[vtx].size();j++){
		
		int v = grafo[vtx][j];
		
		if(dfs_num[v]==0){
		dfs(v);
		}
		
	}
	
}

int main(){
	
	int v,e;
	
	while(cin>>v>>e && v && e){
		
		
		grafo.assign(v+1,vector<int>());
		dfs_num.assign(v+1,0);
		
		int a,b,c;
		
		while(e--){
			
			cin>>a>>b>>c;
			
			if(c==2){
				grafo[a].push_back(b);
				grafo[b].push_back(a);
			}
			
			else grafo[a].push_back(b);
			
		}
		
		bool all = true;;	
		
		
		for(int i=1;i<=v;i++){
			dfs(i);
			
			for(int j = 1; j<=v;j++){
				if(dfs_num[j]==0){
					all=false;
				}
			}
			
			if(all){
					dfs_num.clear();
					dfs_num.assign(v+1,0);
			}
			else break;
		}
		
		
		
		if(all)cout<<"1\n";
		else cout<<"0\n";
		
		
		
	}
	
}
