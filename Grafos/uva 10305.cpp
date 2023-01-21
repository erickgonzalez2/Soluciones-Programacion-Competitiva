#include <bits/stdc++.h>

using namespace std;

vector <int> dfs_num;
vector <pair<int,int>> ts;
vector <int> dp;
vector <int> fn;
vector <vector <int>> grafo;

bool isFather(int n1,int n2){
	
	for(int i = 0; i < grafo[n2].size(); i++){
		if(grafo[n2][i] == n1)return true;
	}
	return false;
}

bool compare(pair<int,int> a,pair<int,int>b){
	
	if(b.second>a.second && !isFather(a.first,b.first))return true;
	
	else return false;
}





void dfs2(int u){
	dfs_num[u] = 1;
	
	for(int i = 0; i < grafo[u].size(); i++){
		
		int v = grafo[u][i];
		
		if(!dfs_num[v]){    
			dfs2(v);
		}
	}
	ts.push_back(make_pair(u,0));
	
}

int main(){
	
	int v,e;
	int a,b;
	
	while(cin>>v>>e){
	
	grafo.assign(v,vector<int>());
	dfs_num.assign(v,0);
	dp.assign(v,0);
	fn.assign(v,0);
	ts.clear();
	
	while(e--){
		
		cin>>a>>b;
		dp[a-1]++;
		grafo[a-1].push_back(b-1);
		
	}
	
	for(int i = 0;i < v; i++){
		
		if(dfs_num[i] == 0){
			dfs2(i);
		}
		
	}
	
	for(int i = 0; i < v; i++){
		for(int j = 0; j < v;j++){
			if(ts[i].first == j){
				ts[i].second = dp[j];
			
			}
		}
	}

	sort(ts.end(),ts.begin(),compare(ts,ts));

	
	for(int i = v-1 ; i>= 0; i--){
		cout<<ts[i]+1<<" ";
	
	
	
	
	}
	
	
	
	
	
	
}
