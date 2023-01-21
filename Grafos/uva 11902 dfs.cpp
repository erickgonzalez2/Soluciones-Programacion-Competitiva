#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector <int>dfs_num;
vector <int>recorrido;

void dfs(int u,int d){
	if(u!=d){
		dfs_num[u]=1;
	for(int i=0;i<(int)grafo[u].size();i++){
		int v = grafo[u][i];
		if(dfs_num[v]==0)dfs(v,d);
		}
	}
	else return;
}

int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);
	int casos;
	int nodes,n;
	int u;
	int cases=1;
	
	cin>>casos;
	while(casos--){
		cin>>nodes;
		grafo.assign(10000,vector<int>());
		
		for(int i=0;i<nodes;i++){
			for(int j=0;j<nodes;j++){
				cin>>n;  
				if(n)grafo[i].push_back(j);
			}
		}
		
		cout<<"Case "<<cases++<<":\n";			
		cout<<'+';
		for(int j=1;j<nodes*2;j++)cout<<'-';	
		cout<<"+\n";
		
		dfs_num.assign(nodes,0);
		recorrido.assign(nodes,0);
		dfs(0,-1);
		recorrido=dfs_num;
		
		for(int i=0;i<nodes;i++){
			
			dfs_num.assign(nodes,0);
			dfs(0,i);
			
			cout<<'|';
			for(int k=0;k<(int)dfs_num.size();k++){
				if(dfs_num[k]==0 && recorrido[k]==1)cout<<'Y';
				else cout<<'N';
				cout<<'|';
			}
			cout<<"\n";
			
			cout<<'+';
			for(int j=1;j<nodes*2;j++)cout<<'-';
			cout<<"+\n";
			}
			
	}
				
		
}
