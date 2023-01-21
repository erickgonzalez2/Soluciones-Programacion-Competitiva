#include <bits/stdc++.h>

using namespace std;

unsigned int path [65536] ;

vector< vector <pair<int,int>>>arbol;
vector <int> dfs_num;

void dfs(int u, int s){
	
	dfs_num[u]= 1;
	
	for(int j = 0;j < arbol[u].size(); j++){
		
		pair <int,int> v;
		v = arbol [u][j];
		
		if(!dfs_num[v.first]){
			s = (s xor v.second);
			cout<<s<<'\n';
			path[s]++;
			dfs(v.first,s);
		}
		
		
	}
	
}



int main(){
	
	int casos;
	int c = 1;
	
	cin>>casos;
	
	while(casos--){
		
		int nodes,a,b,c;
		
		cin>>nodes;
		
		arbol.assign(nodes+1,vector<pair<int,int>>());
		dfs_num.assign(nodes+1,0);
		
		for(int i=0;i<nodes-1;i++){
			
			cin>>a>>b>>c;
			
			arbol[a].push_back(make_pair(b,c));
			arbol[b].push_back(make_pair(a,c));
			
		}
		
		
			dfs(1,0);
			
		
		
		cout<<"Case "<<c<<":\n";
		
		/*for(int k:path){
			
			if(k){
				cout<<k<<'\n';
				path[k]=0;
			}
			else cout<<k<<'\n';
		}*/
		
	c++;	
	}
	
	
	
	
}
