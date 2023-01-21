#include <bits/stdc++.h>
using namespace std;

int nodoA,nodoB,pesoTotal,cont;
vector <vector<pair<int,int>>>grafo;
vector<int>dfs_num;

void dfs(int u,int peso){
	dfs_num[u]=1;
	if(cont==0){
		pesoTotal= peso+pesoTotal;
	}
	if(u== nodoB){
		cont=1;
		return;
	}
	for(int i=0;i<(int)grafo[u].size();i++){
		pair <int,int>v;
		v= grafo[u][i];
		if(dfs_num[v.first]== 0){
			
			dfs(v.first,v.second);
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
	dfs_num.assign(n+1,0);
	pesoTotal=0;
	cont=0;
	cin>>nodoA>>nodoB;
	dfs(nodoA,0);
	cout<<'\n'<<pesoTotal<<'\n';
	
}
