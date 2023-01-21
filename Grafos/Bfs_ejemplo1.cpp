#include <bits/stdc++.h>
using namespace std;

vector< vector <pair<int,int>>> grafo;

int main(){
	
	vector <int> d;
	int nodes,vertex;
	int n1,n2,peso,inicio;
	queue <int> q;
	cin>>nodes>>vertex;
	
	d.assign(nodes,100000000);
	grafo.assign(nodes,vector<pair<int,int>>());
	
	while(vertex--){
		cin>>n1>>n2>>peso;
		grafo[n1-1].push_back(make_pair(n2-1,peso));
	}
	cin>>inicio;
	
	
	q.push(inicio-1);
	
	
	
	while(!q.empty()){
		int u = q.front();q.pop();
		cout<<u+1<<'\n';
		for(int j=0;j<(int)grafo[u].size();j++){
			pair <int,int> v;
			v= grafo[u][j];
			if(d[v.first]==100000000){
				d[v.first] = d[u]+1;
				q.push(v.first);
			}
		}
	}
	
}
