//Pruebasssss xd

#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> grafo;



int main(){
	
	int conexiones;
	int a,b;
	
	grafo.assign(10,vector<int>());
	
	cin>>conexiones;
	
	for(int i=0;i<conexiones;i++){
		
		cin>>a>>b;
		grafo[a-1].push_back(b);
		grafo[b-1].push_back(a);
	}
	
	
	cout<<"Conexiones\n";
	
	
	for(int i = 0;i<10;i++){
		cout<<"Nodo "<<i+1<<"\n";
		for(int j=0;j<grafo[i].size();j++){
			cout<<grafo[i][j]<<" ";
		}
		cout<<"\n\n";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
