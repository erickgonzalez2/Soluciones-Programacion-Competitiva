#include <bits/stdc++.h>
using namespace std;

vector < vector <pair <int,int>>>grafo;
vector <int> taken;
priority_queue <pair <int,pair<int,int>>>pq;

void process (int vtx){
	taken[vtx] = 1;
	for(int j = 0; j <(int)grafo[vtx].size();j++){
		
		pair <int,int> v = grafo[vtx][j];
		if(!taken[v.first]) pq.push(make_pair(-v.second,make_pair(-vtx,-v.first)));		
	}	
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int c=1;
	int casos;
	int peso;
	char coma;
	
	cin>>casos;
	
	while(casos--){
		
		
		int nodes;
		cin>>nodes;
		grafo.assign(nodes,vector<pair<int,int>>());
		taken.assign(nodes,0);
		
		for(int i=0;i<nodes;i++){
			for(int j=0;j<nodes;j++){
				cin>>peso;
				if(peso)grafo[i].push_back(make_pair(j,peso));
				
				if(j<nodes-1)cin>>coma;
							
			}
		}
	
	
		
	int u,w,s;
	process(0);
	char nodea,nodeb;
	set <pair<int,pair<char,char>>>mst;
	while(!pq.empty()){
		pair <int,pair<int,int>> front = pq.top(); pq.pop();
		u = -front.second.second, w =-front.first;
		s = -front.second.first;
		if(!taken[u]){
			if(s<u){
				nodea= s+65;
				nodeb= u+65;
			}
			else{
				nodea = u+65;
				nodeb = s+65;
			}
			mst.insert(make_pair(w,make_pair(nodea,nodeb)));
			process(u);
		}
		
		
	}
	cout<<"Case "<<c<<":\n";
	c++;
	
	
	
	for(auto it=mst.begin();it!=mst.end();it++){
		cout<<it->second.first<<"-"<<it->second.second<<" "<<it->first<<'\n';
	}
	
	
	
	}
	
}
