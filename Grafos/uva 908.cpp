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
	ios_base::sync_with_stdio(false);cin.tie(0);
	int aristas;
	int sum1=0;
	int a,b,c;
	int mst_cost, u , w;
	
	bool first=true;
	
	while(cin>>aristas){
		
		if(!first)cout<<'\n';
		grafo.assign(aristas+1,vector<pair<int,int>>());
		taken.assign(aristas+1,0);
		
		for(int i=0;i<aristas-1;i++){
			cin>>a>>b>>c;
			sum1+=c;
		}
		cin>>aristas;
		
		for(int i=0;i<aristas;i++){
			cin>>a>>b>>c;
			grafo[a].push_back(make_pair(b,c));
			grafo[b].push_back(make_pair(a,c));
		}
		
		cin>>aristas;
		
		for(int i=0;i<aristas;i++){
			cin>>a>>b>>c;
			grafo[a].push_back(make_pair(b,c));
			grafo[b].push_back(make_pair(a,c));
		}
		
		process(1);
		mst_cost = 0;
		
		while(!pq.empty()){
		
		pair <int,int> front = pq.top(); pq.pop();
		u = -front.second, w =-front.first;
		if(!taken[u]){
			mst_cost += w , process(u);
		}
	}
	
	cout<<sum1<<'\n';
	cout<<mst_cost<<'\n';
	first=false;
	sum1=0;	
		
	}
}
