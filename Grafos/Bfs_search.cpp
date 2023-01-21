#include <bits/stdc++.h>
using namespace std;

vector <vector <pair<int,int>>>grafo;

int main(){
	
	int n,V,s;
	grafo.assign(n,vector<pair<int,int>>());
	vector <int>d;
	d.assign(V,1000000);
	d[s]=0;
	queue <int> q;q.push(d[s]);
	
	while(!q.empty()){
		int u = q.front();q.pop();
		for(int j = 0;j< (int)grafo[u].size();j++){		
		pair<int,int> v = grafo[u][j];
		if(d[v.first]==1000000){
			d[v.first] = d[u]+1;
			q.push(v.first);
		}
	}
}
	
	
	
	
	
	
}
