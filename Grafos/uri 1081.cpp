#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>grafo;
vector<int>dfs_num;
int nivel;

void dfs(int u){
	dfs_num[u]=1;
	nivel++;
	sort(grafo[u].begin(),grafo[u].end());
	for(int i=0;i<(int)grafo[u].size();i++){
		int v=grafo[u][i];
		if(dfs_num[v]==0){
			for(int j=0;j<nivel;j++)cout<<"  ";
			cout<<u<<'-'<<v<<" pathR(G,"<<v<<')';
			cout<<'\n';
			dfs(v);
		}
		else{
			for(int j=0;j<nivel;j++)cout<<"  ";
			 cout<<u<<'-'<<v<<'\n';
		}
	}
	nivel--;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n,n1,n2,caso=1;
	int vertex,edges;
	cin>>n;
	while(n--){
		cin>>vertex>>edges;
		
		grafo.assign(vertex,vector<int>());
		dfs_num.assign(vertex,0);	
		
		while(edges--){
			
			cin>>n1>>n2;
			grafo[n1].push_back(n2);
		}
		
		cout<<"Caso "<<caso++<<":\n";
		nivel=0;
		for(int i=0;i<dfs_num.size();i++){
			if(dfs_num[i]==0 && !grafo[i].empty()){		
				dfs(i);
				cout<<'\n';
			}
		}
		
	}
}
