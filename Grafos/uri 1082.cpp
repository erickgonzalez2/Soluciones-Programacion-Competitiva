#include <bits/stdc++.h>
using namespace std;

vector < vector <int>> grafo;
vector <int> dfs_num;
vector <char>components;
char z;

void dfs(int u){
	dfs_num[u]=1;
	z=u+97;
	components.push_back(z);
	for(int i=0;i<grafo[u].size();i++){
		int v= grafo[u][i];
		if(dfs_num[v]==0){
			dfs(v);
		}
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int casos;
	int conectados;
	int vertex,edges,n1,n2;
	char x,y;
	cin>>casos;
	
	for(int i=1;i<=casos;i++){
		conectados=0;
		cin>>vertex>>edges;
		
		grafo.assign(vertex,vector<int>());
		dfs_num.assign(vertex,0);
		
		while(edges--){
			cin>>x>>y;
			n1=x-97;
			n2=y-97;
			grafo[n1].push_back(n2);
			grafo[n2].push_back(n1);
		}
		
		cout<<"Case #"<<i<<":\n";
		for(int j=0;j<dfs_num.size();j++){
			if(dfs_num[j]==0){
				dfs(j);
				conectados++;
				sort(components.begin(),components.end());
				for(char k:components){
					cout<<k<<",";
				}
				cout<<'\n';
				components.clear();
			}
		}
		cout<<conectados<<" connected components\n";
		cout<<'\n';
	}
}
