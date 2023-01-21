#include <bits/stdc++.h>
using namespace std;

vector <vector <pair <int,int>>> grafo;
vector <int> taken;
priority_queue <pair <int,int>>pq;

void process (int vtx){
	
	taken[vtx] = 1;
	
	for(int j = 0; j <(int)grafo[vtx].size();j++){
		
		pair <int,int> v = grafo[vtx][j];
		if(!taken[v.first]) pq.push(make_pair(-v.second,-v.first));		
	}	
}

int main(){
	
	int V,mst_cost, u , w;
	int k;
	cin>>V>>k;
	grafo.assign(V,vector <pair<int,int>>());
	taken.assign(V,0);
	int a,b,c;
	for(int i=0;i<k;i++){
		cin>>a>>b>>c;
		
		grafo[a].push_back(make_pair(b,c));
		grafo[b].push_back(make_pair(a,c));
	}
	int ini;
	cin>>ini;
	process(ini);
	mst_cost = 0;
	
	while(!pq.empty()){
		
		pair <int,int> front = pq.top(); pq.pop();
		u = -front.second, w =-front.first;
		if(!taken[u]){
			mst_cost += w , process(u);
		}
	}
	
	cout<<"MST cost = "<<mst_cost<<" (Prim's)\n";
	
	
}
