#include <bits/stdc++.h>
using namespace std;

vector <vector<pair <int,double>>>grafo;
vector <int>taken;
priority_queue <pair <double,int>>pq;

void process (int vtx){
	
	taken[vtx] = 1;
	
	for(int j = 0; j <(int)grafo[vtx].size();j++){
		
		pair <int,double> v = grafo[vtx][j];
		if(!taken[v.first]) pq.push(make_pair(-v.second,-v.first));		
	}	
}

int main(){
	
	int casos;
	int v;
	string str;
	cin>>casos;
	cin.ignore();
	getline(cin,str);
	while(casos--){
		
		vector <pair <double,double>>coordenadas;
		cin>>v;
		grafo.assign(v,vector<pair<int,double>>());
		
		double x,y;
		
		for(int i=0;i<v;i++){
			cin>>x>>y;
			coordenadas.push_back(make_pair(x,y));
		}
		
		double a1,b1,a2,b2;
		double d;
		
		for(int i=0;i<v;i++){
			a1=coordenadas[i].first;
			b1=coordenadas[i].second;
			for(int j=0;j<v;j++){
				if(i!=j){
				a2=coordenadas[j].first;
				b2=coordenadas[j].second;

				d = sqrt(pow(a2-a1,2.0)+pow(b2-b1,2.0));
				grafo[i].push_back(make_pair(j,d));
				}
			}
		}
		
	taken.assign(v,0);
	process(0);
	double mst_cost = 0;
	int u;
	double w;
		while(!pq.empty()){
		
		pair <double,int> front = pq.top(); pq.pop();
		u = -front.second, w =-front.first;
		if(!taken[u]){
			mst_cost += w , process(u);
		}
	}
		
		printf("%.2lf\n",mst_cost);
		
		if(casos){
			cout<<'\n';
			cin.ignore();
			getline(cin,str);
		}
	}	
}
