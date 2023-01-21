#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int nodos,x;
	vector <vector <int> > grafo;
	cin>>nodos;
	grafo.resize(nodos);
	
	for(int i=0;i<nodos;i++){
		for(int j=0;j<nodos;j++){
			cin>>x;
			grafo[i].push_back(x);
		}
	}
	
	
	for(int i=0;i<nodos;i++){
		for(int j=0;j<nodos;j++){
			cout<<grafo[i][j]<<" ";
		}
		cout<<'\n';
	}
}
