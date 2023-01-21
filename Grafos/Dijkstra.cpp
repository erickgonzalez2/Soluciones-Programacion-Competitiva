#include <bits/stdc++.h>
using namespace std;

vector <vector <pair<int,int>>>grafo;


int main(){
	
	int n,V,s;

	vector<int>dist;
	cin>>n>>V;
	grafo.assign(n+1,vector <pair<int,int>>());
	dist.assign(V+1,1000000);
	
	int a,b,c;
	while(V--){
		
		cin>>a>>b>>c;
		grafo[a].push_back(make_pair(b,c));		
	}
	
	int destino;
	cin>>s>>destino;	
	
	dist[s]=0;
	priority_queue<pair<int,int>, vector <pair<int,int>>,greater <pair<int,int> > >pq;
	pq.push(make_pair(0,s));
	
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
	cout<<dist[destino]<<'\n';
	
	
}
