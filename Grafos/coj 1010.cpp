#include <bits/stdc++.h>

using namespace std;

vector <vector <pair <int,int>>> grafo;
vector <int> taken;
priority_queue <pair <int,int>>pq;


void process (int vtx){
	taken[vtx] = 1;
	
	for(int j = 0 ; j< grafo[vtx].size();j++){
		
		pair <int,int> v = grafo[vtx][j];
		if(!taken[v.first]) pq.push(make_pair(-v.second,-v.first));
		
	}
	
}


int main(){
	
	int test;
	
	
	cin>>test;
	
	while(test--){
		
		int vertex,edges;
		int a,b,weight;
		int mst_cost;
		
		cin>>vertex>>edges;
		
		grafo.assign(vertex+1,vector<pair<int,int>>());
		
		
		while(edges--){
			
			cin>>a>>b>>weight;
			
			
			grafo[a].push_back(make_pair(b,weight));
			grafo[b].push_back(make_pair(a,weight));
			
			
		}
		
		set <int> costos;
		int u,w;
		
		taken.assign(vertex+1,0);
		
		for(int i=1;i<=vertex;i++){
			
			
			process (i);
			mst_cost = 0;
			
			while(!pq.empty()){
				
				pair <int,int> front = pq.top();
				pq.pop();
				
				u = -front.second;
				w = -front.first;
				
				if(!taken[u]){
					
					mst_cost+=w;
					process(u);
				}
				
			}
			costos.insert(mst_cost);
			taken.clear();
	
		}
		
		
		for(auto it=costos.begin();it!=costos.end();it++){
			cout<<*it<<" ";
		}
		
		
	}
	
	
}
