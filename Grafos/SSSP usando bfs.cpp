#include <bits/stdc++.h>
using namespace std;

vector <vector <int>>grafo;
vector <int> d;

int main(){
	
	int nodos,aristas,a,b;
	int inicio,destino;
	cin>>nodos;
	cin>>aristas;
	
	grafo.assign(nodos+1,vector<int>());
	d.assign(nodos+1,0);
	
	
	while(aristas--){
		cin>>a>>b;
		grafo[a].push_back(b);
		grafo[b].push_back(a);
		
	}
	
	cin>>inicio>>destino;
	queue <int> q;
	q.push(inicio);
	
	while(!q.empty()){
		
		int u = q.front();q.pop();
		if(u==destino){
			cout<<"The shortest path from "<<inicio<<" to "<<destino<<" is "<<d[u]<<'\n';
			break;
		}
		for(int i=0;i<grafo[u].size();i++){
			int v = grafo[u][i];
			
			if(d[v]==0){
				d[v]= d[u]+1;
				q.push(v);
			}
		}
		
		
	}
}
