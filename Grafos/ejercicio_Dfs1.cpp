#include <bits/stdc++.h>
using namespace std;

vector <vector<pair<int,int>>>grafo;
vector<int>dfs_num;

void dfs(int u){
	cout<<u<<'\n';
	dfs_num[u]=1;
	for(int i=0;i<(int)grafo[u].size();i++){
		pair <int,int>v;
		v= grafo[u][i];
		if(dfs_num[v.first]== 0){
			
			dfs(v.first);
		}
		}
	}

int main(){
	int n,m;
	cin>>n>>m;
	grafo.assign(n+1,vector<pair<int,int>>());
	
	int x,y,z;
	while(m--){
		cin>>x>>y>>z;
		grafo[x].push_back(make_pair(y,z));
	}
	int node;
	cin>>node;
	dfs_num.assign(n+1,0);
	dfs(node);
	
}
