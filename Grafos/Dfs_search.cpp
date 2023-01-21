#include <bits/stdc++.h>
using namespace std;

vector <vector<pair<int,int>>>grafo;
vector<int>dfs_num;

void dfs(int u){
	dfs_num[u]=1;
	for(int i=0;i<(int)grafo[u].size();i++){
		pair <int,int>v;
		v= grafo[u][i];
		if(dfs_num[v.first]== 0){
			dfs(v.first);
		}
		}
	}

int main(){
	
}
