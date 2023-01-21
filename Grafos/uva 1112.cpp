#include <bits/stdc++.h>
using namespace std;

vector < vector < pair <int,int> > > grafo;
vector <int>dist;



int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int casos;
	string line;
	
	cin>>casos;
	
	cin.ignore();
	getline(cin,line);
	while(casos--){
		
		int cells, exit, time_limit;
		int conections;
		int cont=0;
		
		cin>>cells>>exit>>time_limit>>conections;
		grafo.assign(cells+1,vector <pair<int,int>>());
		dist.assign(cells+1,1000000);
		
		int a,b,c;
		
		while(conections--){
			
			cin>>a>>b>>c;
			grafo[a].push_back(make_pair(b,c));
			
		}
		
		int inicio;
		for(int i=1;i<=cells;i++){
			inicio=i;
			
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
			
			if(dist[exit]<=time_limit)cont++;
			dist.assign(cells+1,1000000);
			
		}
		cout<<cont<<'\n';
		
		if(casos){
			cout<<'\n';
			cin.ignore();
			getline(cin,line);
		}
			
	}
	
}
