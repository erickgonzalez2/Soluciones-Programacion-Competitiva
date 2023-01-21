#include <bits/stdc++.h>
using namespace std;

vector <vector <int>>grafo;
vector <int> dfs_num;
int cont;

void dfs(int u){
	dfs_num[u]=1;
	for(int i=0;i<(int)grafo[u].size();i++){
		int v = grafo[u][i];
		cont++;
		if(dfs_num[v]==0){
		dfs(v);
		}
	}
}

int main(){
	
	int n,n1,n2,inicio;
	int vertex,edges;
	
	cin>>n;
	while(n--){
		cont=0;
		cin>>inicio;
		cin>>vertex>>edges;
		set<pair<int,int>>doble;
		pair <int,int>v;
		pair <int,int>v2;
		
		grafo.assign(vertex,vector<int>());
		dfs_num.assign(vertex,0);
		
		while(edges--){
			cin>>n1>>n2;
			v = {n2,n1};
			v2 = {n1,n2};
			auto it = doble.find(v);
			auto itr = doble.find(v2);
			if(it==doble.end() && itr==doble.end()){
			grafo[n1].push_back(n2);
			grafo[n2].push_back(n1);
			doble.insert(v);
			doble.insert(v2);
			}
			
		}	
		
		dfs(inicio);
		doble.clear();
		cout<<cont<<'\n';
	}
	
}

