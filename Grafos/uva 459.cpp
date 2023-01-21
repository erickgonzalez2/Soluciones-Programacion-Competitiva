#include <bits/stdc++.h>
using namespace std;

vector <int>dfs_num;
vector <vector <int>>grafo;
set <int>numbers;

void dfs(int u){
	dfs_num[u]=1;
	
	for(int i=0;i<grafo[u].size();i++){
		int v = grafo[u][i];
		
		if(dfs_num[v]==0){
			dfs(v);
		}
	}
	
}


int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int casos;
	int u,v;
	string str,ln;
	int con;
	bool l;
	int large;
	
	cin>>casos;
	cin.ignore();
	getline(cin,str);
	while(casos--){
		
		con=0;
		dfs_num.assign(27,0);
		grafo.assign(27,vector<int>());
		
		l=true;
		
		while(getline(cin,str)){
			
			if(str[0]=='\0'){
				break;
			}
			
			for(int i=0;i<str.size();i++){
				
				int x = str[i]-65;
				
				if(i==0) {
					u=str[i]-65;
					if(l){
						l=false;
						large=u;
					}
				}
				else{
					v = str[i]-65;
					grafo[u].push_back(v);
					grafo[v].push_back(u);
				}
			}
		}
		
		for(int i=0;i<=large;i++){
			if(dfs_num[i]==0){
				dfs(i);
				con++;
			}
		}
		cout<<con<<'\n';
		numbers.clear();
		if(casos){
			cout<<'\n';
		}
	}
	
}
