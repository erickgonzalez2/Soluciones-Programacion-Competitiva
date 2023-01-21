#include <bits/stdc++.h>

using namespace std;

vector <vector <pair <int ,double>>> grafo;
vector <int> taken;
priority_queue <pair <double,int>>pq;

void process(int vtx){
	
	taken[vtx] = 1;
	
	for(int j = 0; j<grafo[vtx].size();j++){
		
		pair <int,double> v = grafo[vtx][j];
		
		if(!taken[v.first])pq.push(make_pair(-v.second,-v.first));
		
	}
	
	
}

int main(){
	
	int n;
	double x,y;
	
	vector <pair<double,double>> coordenadas;
	
	cin>>n;
	
	grafo.assign(n,vector<pair<int,double>>());
	taken.assign(n,0);
	
	
	
	while(n--){
		
		cin>>x>>y;
		
		coordenadas.push_back(make_pair(x,y));	
		
	}
	
	double distance;
	
	for(int i= 0;i<coordenadas.size();i++){
		
		for(int j=i+1;j<coordenadas.size();j++){
			
			double x1,y1,x2,y2;
			
			x1 = coordenadas[i].first;
			y1 = coordenadas[i].second;
			x2 = coordenadas[j].first;
			y2 = coordenadas[j].second;
			
			distance = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
			
			grafo[i].push_back(make_pair(j,distance));
			grafo[j].push_back(make_pair(i,distance));
			
		}
	
		}
		
		double mst_cost = 0;
		process(0);
		double w;
		int u;
		
		while(!pq.empty()){
			
			pair <double,int> front = pq.top();
			pq.pop();
			u = -front.second;
			w = -front.first;
			
			if(!taken[u]){
				mst_cost+= w;
				process(u);
			}
		}
		printf("%.2lf\n",mst_cost);
	}
