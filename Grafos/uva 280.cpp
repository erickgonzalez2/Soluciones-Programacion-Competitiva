#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector <int> dfs_num;
vector <int> vertices;
vector <int> inax;

void dfs(int u){
	
	for(int i=0;i<grafo[u].size();i++){
		int v= grafo[u][i];
		
		if(dfs_num[v]==0){
			dfs_num[v]=1;
			dfs(v);
		}
		
	}
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int vertex;
	int node1,nodes,ini,x;
	bool start;
	char c;
	string str;
	string word;
	
	while(cin>>vertex && vertex!=0){
	
		grafo.assign(vertex+1,vector<int>());
		
		while(getline(cin,str) && str[0]!='0'){
			
			start = false;
			
			istringstream iss(str);
			
			while(iss>>word){	
				if(word=="0")break;
				
				if(!start){
					istringstream nn(word);
					nn>>node1;
					start=true;
				}
				else{
					istringstream nn(word);
					nn>>nodes;
					grafo[node1].push_back(nodes);
				}
				
				}
		}
		
		//inicios;
		
		cin>>ini;
		while(ini--){
			cin>>x;
			vertices.push_back(x);
		}
		
		for(int i=0;i<vertices.size();i++){
			dfs_num.assign(vertex+1,0);
			dfs(vertices[i]);
			for(int j=1;j<dfs_num.size();j++){
				if(dfs_num[j]==0)inax.push_back(j);
			}
			cout<<inax.size();
			for(int k:inax)cout<<" "<<k;
			cout<<'\n';
			inax.clear();
		}
		
		vertices.clear();
	}
	
}
