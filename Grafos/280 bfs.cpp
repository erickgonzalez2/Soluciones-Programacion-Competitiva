#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> grafo;
vector <int> d;
vector <int> vertices;
vector <int> inax;

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
		
		queue <int>q;
		
		for(int i=0;i<vertices.size();i++){
			d.assign(vertex+1,0);
			q.push(vertices[i]);
			
//bfs
			while(!q.empty()){
				
				int u=q.front();q.pop();
				for(int k=0;k<grafo[u][k];k++){
					int v =grafo[u][k];
					if(d[v]==0){
						d[v]=1;
						q.push(v);
					}
				}		
			}

//						
			for(int j=1;j<d.size();j++){
				if(d[j]==0)inax.push_back(j);
			}
			cout<<inax.size();
			for(int k:inax)cout<<" "<<k;
			cout<<'\n';
			inax.clear();
		}
		
		vertices.clear();
	}
	
}
