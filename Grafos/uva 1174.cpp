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
	
	int casos;
	int nodes,vert;
	int mst_cost,u,w;
	map<string,int> cities;
	
	
	
	string line;
	
	cin>>casos;
	
	while(casos--){
		cin.ignore();
		getline(cin,line);
		cin>>nodes>>vert;
		
		grafo.assign(nodes,vector <pair<int,int>>());
		taken.assign(nodes,0);
		
		string a,b;
		int v1,v2,peso;
		
		int k=0;
		while(vert--){
			
			cin>>a>>b>>peso;
			
			auto it= cities.find(a);
			if(it==cities.end()){
				cities.insert({a,k});
				v1=k;
				k++;
			}
			else v1 = it->second;
			
			auto itr= cities.find(b);
			if(itr==cities.end()){
				cities.insert({b,k});
				v2=k;
				k++;
			}
			else v2= itr->second;
			
			grafo[v1].push_back(make_pair(v2,peso));
			grafo[v2].push_back(make_pair(v1,peso));
			
		}
		
			process(0);
			mst_cost = 0;
	
	while(!pq.empty()){
		
		pair <int,int> front = pq.top(); pq.pop();
		u = -front.second, w =-front.first;
		if(!taken[u]){
			mst_cost += w , process(u);
		}
	}
	cout<<mst_cost<<'\n';
	cities.clear();	
	if(casos)cout<<'\n';	
	
	}
	
}

