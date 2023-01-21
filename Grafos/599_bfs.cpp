#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>grafo;
vector <int> d;
vector <int> nodos;
vector <int> arboles;
int cont;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int casos,nodoa,nodob,buscar;
	cin>>casos;
	
	string str;
	
	cin.ignore();
	while(casos--){
		
		grafo.assign(27,vector<int>());
		d.assign(27,0);
		
		while(getline(cin,str) && str[0]!='*'){
			
			
			nodoa=str[1]-65;
			nodob=str[3]-65;
			grafo[nodoa].push_back(nodob);
			grafo[nodob].push_back(nodoa);
		}
		
		getline(cin,str);
		int trees=0;
		int acorns=0;
		queue <int> q;
		
		for(int i=0;i<str.size();i++){
			if(isalpha(str[i])){
				buscar=str[i]-65;
				if(d[buscar]==0){
		//bfs	
				q.push(buscar);
				while(!q.empty()){
					int u=q.front();q.pop();
					arboles.push_back(u);
					for(int k=0;k<grafo[u].size();k++){
						int v = grafo[u][k];
						if(d[v]==0){
							q.push(v);
							d[v]=1;
						}	
					}	
				}
		//
					if(arboles.size()>=2){
						trees++;
						arboles.clear();
					}
					else {
						acorns++;
						arboles.clear();
					}
				}
			}
		}
		
		cout<<"There are "<<trees<<" tree(s) and "<<acorns<<" acorn(s).\n";
	}
}
