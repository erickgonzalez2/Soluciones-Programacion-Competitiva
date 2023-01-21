#include <bits/stdc++.h>

using namespace std;

vector <vector <pair<int,int>>> grafo;
vector <int>taken;
priority_queue <pair<int,int>> pq;

void process(int vtx){
	
	taken[vtx] = 1;
	
	for(int i = 0; i< grafo[vtx].size();i++){
	
		pair <int,int> v = grafo[vtx][i];
		if(!taken[v.first])pq.push(make_pair(-v.second,-v.first));
		
	}
	
}

int main(){
	
	int v,e;
	
	while(cin>>v>>e && v && e){
		
		grafo.assign(v,vector<pair<int,int>>());
		taken.assign(v,0);
		
		int a,b,c;
		int sum = 0;
		while(e--){
			
			cin>>a>>b>>c;
			
			grafo[a].push_back(make_pair(b,c));
			grafo[b].push_back(make_pair(a,c));
			
			sum+=c;
		}
		
		int mst_cost = 0;
		int u,w;
		
		
		process(0);
		
		
		while(!pq.empty()){
			
			pair <int,int> front = pq.top();
			pq.pop();
			u = -front.second;
			w = -front.first;
			
			if(!taken[u]){
				process(u);
				mst_cost+=w;
			}
			
			
		}
		
		cout<<sum-mst_cost<<'\n';
		
		
		
		
		
		
		
	}
	
	
}
