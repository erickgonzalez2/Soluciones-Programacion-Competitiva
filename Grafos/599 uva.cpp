#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>grafo;
vector <int> dfs_num;
vector <int> nodos;
vector <int> arboles;
int cont;

void dfs(int u){
	dfs_num[u]=1;
	arboles.push_back(u);
	for(int i=0;i<grafo[u].size();i++){
		int v;
		v=grafo[u][i];
		if(dfs_num[v]==0){
			dfs(v);
		}
	}
}


int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int casos,nodoa,nodob,buscar;
	cin>>casos;
	
	string str;
	
	cin.ignore();
	while(casos--){
		
		grafo.assign(27,vector<int>());
		dfs_num.assign(27,0);
		
		while(getline(cin,str) && str[0]!='*'){
			
			
			nodoa=str[1]-65;
			nodob=str[3]-65;
			grafo[nodoa].push_back(nodob);
			grafo[nodob].push_back(nodoa);
		}
		
		getline(cin,str);
		int trees=0;
		int acorns=0;
		
		for(int i=0;i<str.size();i++){
			if(isalpha(str[i])){
				buscar=str[i]-65;
				if(dfs_num[buscar]==0){
					dfs(buscar);
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
