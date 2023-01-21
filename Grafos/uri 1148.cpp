#include <bits/stdc++.h>
using namespace std;

vector <vector <pair <int,int > > > grafo;
vector <int>dist;


int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int nodes,edges;
	bool prim = false;
	
	while(cin>>nodes>>edges && nodes+edges!=0){
		
		grafo.assign(nodes+1,vector <pair <int,int>>());
		
		int a,b,peso;
		int q;
		bool acuerdo;
		
		while(edges--){
			cin>>a>>b>>peso;
			acuerdo = false;
			
			for(int i=0;i<grafo[b].size();i++){
				if(grafo[b][i].first==a){
					grafo[a].push_back(make_pair(b,0));
					grafo[b][i].second = 0;
					acuerdo = true;
					break;
				}
			}
			
			if(!acuerdo){
				grafo[a].push_back(make_pair(b,peso));
			}
			
			
			
		}
		cin>>q;
		int inicio,dest;
		while(q--){
			
			cin>>inicio>>dest;
				dist.assign(nodes+1,1000000);
				
				priority_queue <pair<int,int>, vector < pair<int,int>>, greater <pair<int,int>>> pq;
				dist[inicio] = 0;
				pq.push(make_pair(0,inicio));
				
				while(!pq.empty()){
					
					pair <int,int> front = pq.top();pq.pop();
					int d = front.first , u = front.second;
					if(d>dist[u])continue;
					for(int j = 0; j < grafo[u].size(); j++){
						
						pair <int,int> v = grafo[u][j];
						
						if(dist[u] + v.second < dist[v.first]){
							dist[v.first]= dist[u]+v.second;
							pq.push(make_pair(dist[v.first],v.first));
						}
					}
				}

				if(dist[dest]!=1000000)cout<<dist[dest]<<'\n';
				else cout<<"Nao e possivel entregar a carta\n";
			}
		
		
		
		cout<<'\n';
	}
	
	
}
