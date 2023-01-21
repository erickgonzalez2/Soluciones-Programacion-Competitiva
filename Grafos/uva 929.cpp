#include <bits/stdc++.h>
using namespace std;

vector <vector <pair<int,int>>>grafo;
vector <int>dist;
int matriz[999][999];


int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n,x;
	int fil,col;
	cin>>n;
	
	while(n--){
		
		bool ini =false;
		int inicio;
		cin>>fil>>col;
		grafo.assign(fil*col,vector<pair<int,int>>());
		dist.assign(fil*col,1000000);
		
			for(int i=0;i<fil;i++){
				for(int j=0;j<col;j++){
				cin>>x;
				if(!ini){
					ini = true;
					inicio = x;
				}
				matriz[i][j]=x;
				}
			}
		
		
		
		int k=0;
		for(int i=0;i<fil;i++){
			for(int j=0;j<col;j++){
				
				if(i-1>=0){
					grafo[k].push_back(make_pair(k-col,matriz[i-1][j]));
				}
				
				if(i+1<fil){
					grafo[k].push_back(make_pair(k+col,matriz[i+1][j]));
				}
				
				if(j+1<col){
					grafo[k].push_back(make_pair(k+1,matriz[i][j+1]));
				}
				
				if(j-1>=0){
					grafo[k].push_back(make_pair(k-1,matriz[i][j-1]));
				}
				
				k++;
			}	
		}
		
		priority_queue<pair<int,int>, vector <pair<int,int>>,greater <pair<int,int> > >pq;
		pq.push(make_pair(inicio,0));
		dist[0]=inicio;
		
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
	
	int final = (fil*col)-1;
	
	cout<<dist[final]<<'\n';
		
		
	}
	
}
