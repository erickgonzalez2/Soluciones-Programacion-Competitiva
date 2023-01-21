#include <bits/stdc++.h>
using namespace std;
int main(){
	
	
	int a1,a2,x;
	int vertices;
	int nodos;
	int aristas;
	cin>>nodos>>aristas;
	int grafo[nodos][nodos]= {0};
	
	
	
	while(aristas--){
		cin>>a1>>a2>>x;
		grafo[a1-1][a2-1]=x;
		//grafo[a2-1][a1-1]=x;
	}
	
	cout<<'\n';
		
	int c,d;
	cin>>c>>d;
	
	cout<<grafo[c-1][d-1]<<'\n';
	
	
}
