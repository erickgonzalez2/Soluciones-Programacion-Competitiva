#include <bits/stdc++.h>
using namespace std;



int main(){
	
	int nt;
	vector <vector<int>> graph;
	graph.resize(10);
	map <int,vector <int>> routes;
	
	while(cin>>nt &&nt){
		
		int cost;
		vector<int> points;
		int npoints;
		int x;
		
		while(nt--){
			cin>>cost;
			cin>>npoints;
			while(npoints--){
				cin>>x;
				points.push_back(x);
			}
		
			for(int i=0;i<points.size()-1;i++){
				graph[points[i]][points[i+1]] = cost,
				graph[points[i+1]][points[i]] = cost;
			}
			
			routes.insert({cost,points});
		}
		
		for(int i=1;i<graph.size();i++){
				for(int j=1;j<graph[i].size();j++){
					cout<<graph[i][j]<<" ";
				}
				cout<<'\n';
			}
		
		
		
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
}
