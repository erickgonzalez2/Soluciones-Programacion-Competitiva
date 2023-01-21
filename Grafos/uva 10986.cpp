#include <bits/stdc++.h>
using namespace std;

vector <vector <pair <int,int>>>grafo;


int main(){
	
	
	int casos;
	int cont=1;
	
	cin>>casos;
	
	while(casos--){
		
		int nodos, aristas, inicio,destino;
		vector<int>dist;
		
		cin>>nodos>>aristas>>inicio>>destino;
		
		grafo.assign(nodos+1,vector <pair<int,int>>());
		dist.assign(nodos+1,1000000);
		
		
		
		int a,b,c;
		
		while(aristas--){
			cin>>a>>b>>c;
			grafo[a].push_back(make_pair(b,c));	
			grafo[b].push_back(make_pair(a,c));
		}
		
	dist[inicio]=0;
	priority_queue<pair<int,int>, vector <pair<int,int>>,greater <pair<int,int> > >pq;
	pq.push(make_pair(0,inicio));
	
	while(!pq.empty()){
		
		pair<int,int> front = pq.top();pq.pop();
		int d = front.first, u = front.second;
		if(d > dist[u])continue;
		for(int j = 0;j< (int)grafo[u].size();j++){
			pair<int,int> v = grafo[u][j];
			if(dist[u] + v.second < dist[v.first]){
				dist[v.first] = dist[u]+v.second;
				pq.push(make_pair(dist[v.first],v.first));
			}
		}
	}
	
	cout<<"Case #"<<cont<<": ";
	if(dist[destino]==1000000)cout<<"unreachable"<<'\n';
	else cout<<dist[destino]<<'\n';
		cont++;
	}
	
	
	
	
}
