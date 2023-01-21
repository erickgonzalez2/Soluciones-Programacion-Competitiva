#include <bits/stdc++.h>
using namespace std;

vector < vector <pair <int,int > > > grafo;
vector <int> dist;
vector <int> fuel_cost;


int main(){
	
	
	int cities, roads;
	int price;
	int nodeA,nodeB,l;
	int queries;
	
	cin>>cities;
	cin>>roads;
	
	grafo.assign(cities,vector <pair<int,int>>());
	dist.assign(cities,1000000);
	fuel_cost.assign(cities,0);
	
	for(int i=0;i<cities;i++){
		
		cin>>price;
		fuel_cost[i]=price;
	}
	
	for(int i=0;i<roads;i++){
		
		cin>>nodeA>>nodeB>>l;
		grafo[nodeA].push_back(make_pair(nodeB,l));
		grafo[nodeB].push_back(make_pair(nodeA,l));
	}
	
	cin>>queries;
	
	while(queries--){
	
	int capacity, start,goal;
	
	cin>>capacity>>start>>goal;
	
	priority_queue<pair<int,int>, vector <pair<int,int>>,greater <pair<int,int> > >pq;
	
	dist[start]= fuel_cost[start]*capacity;
	
		
	}
	
	
	
	
}
