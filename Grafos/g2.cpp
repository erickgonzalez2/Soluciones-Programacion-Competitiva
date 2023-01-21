#include <bits/stdc++.h>
using namespace std;

vector <vector<pair<int,int>>>grafo;

int main(){
	
	int edge,nodes;
	int x,vecino,peso;
	cin>>nodes>>edge;
	grafo.assign(nodes,vector<pair<int,int>>());
	
	int i;
	while(edge--){
			cin>>x>>vecino>>peso;
			grafo[x-1].push_back(make_pair(vecino,peso));
	}
	int v,e;
	cin>>v>>e;
	cout<<'\n';
	
	for(int j=0;j<grafo[v-1].size();j++){
		if(grafo[v-1][j].first==e){
			cout<<grafo[v-1][j].second;
			cout<<'\n';
			break;
		}
	}
	cout<<'\n';
	
	
}
