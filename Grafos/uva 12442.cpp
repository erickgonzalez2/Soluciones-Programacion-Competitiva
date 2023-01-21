#include <bits/stdc++.h>
using namespace std;

vector <vector <int>> grafo;
vector <int>dfs_num;
int x = 0;

void dfs(int u){
	dfs_num[u]= 1;
	x++;
	
	for(int i=0;i<grafo[u].size();i++){
		int v = grafo[u][i];
		if(!dfs_num[v]){
			dfs(v);
		}
	}
	
}


int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int casos;
	int c = 1;
	int edges;
	
	cin>>casos;
	
	while(casos--){
		cin>>edges;
		
		grafo.assign(edges+1,vector<int>());
		int nodea,nodeb;
		
		while(edges--){
			cin>>nodea>>nodeb;
			grafo[nodea].push_back(nodeb);
		}
		
		int mayor = 0;
		int nodom = 0;
		
		for(int i=1;i<grafo.size();i++){
			x = 0;
			dfs_num.assign(grafo.size()+1,0);
			dfs(i);
			if(x>mayor){
				mayor = x;
				nodom = i;
				if(mayor==grafo.size()-1)break;
			}
			
		}
		
		cout<<"Case "<<c<<":"<<" "<<nodom<<'\n';
		c++;
	}
	
	
	
}
