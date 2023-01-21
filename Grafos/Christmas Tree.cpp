#include <bits/stdc++.h>
using namespace std;


int n,K;

vector<vector<int>> grafo;

vector<pair<int,int>> nodos_hijos;

vector<int>dfs_num;

vector<bool>eliminados;


void dfs(int v,int padre){
	
	dfs_num[v]=1;
	nodos_hijos[v] = make_pair(0,padre);
	
	for(int j=0;j<grafo[v].size();j++){
		
		int u = grafo[v][j];
		
		if(!dfs_num[u]){
			nodos_hijos[v].first++;
			dfs(u,v);
		}
		
		
	}
	
	
	
}



void eliminacionDirecta(int nodo){
	
	for(int j = 0; j < grafo[nodo].size();j++){
		
		int u = grafo[nodo][j];
		eliminados[u]=false;
		
		eliminacionDirecta(u);
	}
	
}


void eliminacionBusqueda(int nodo){
	
	//buscar primero nodos que tengan mas de 0 hijos
	
	int cont = 0;;
	
	for(int j = 1; j<=n; j++){
		
		if(nodos_hijos[j].second == nodo){
			if(nodos_hijos[j].first==0){
				eliminados[j]=false;
				cont++;
			}
		}
		
		if(nodos_hijos[nodo].first-cont==K){
			break;
		}
		
	}
	
	if(nodos_hijos[nodo].first-cont==K){
			return;
		}
		
	//sino eliminamos a los que tengan entre 1 y K nodos
	
	for(int j=1; j<=n ; j++){
		
		if(nodos_hijos[j].second==nodo){
			if(nodos_hijos[j].first>=1 && nodos_hijos[j].first<K){
				eliminados[j] = false;
				eliminacionDirecta(j);
				cont++;
			}
			
		}
		if(nodos_hijos[nodo].first-cont==K)break;
	}
	
	if(nodos_hijos[nodo].first-cont==K)return;	
	
	//sino elimina al que sea;

	
	
}

int main(){
	
	int casos;
	cin>>casos;
	while(casos--){
		
		int nodeA,nodeB;
		cin>>n>>K;
		
		grafo.assign(n+1,vector<int>());
		nodos_hijos.assign(n+1,pair<int,int>());
		dfs_num.assign(n+1,0);
		eliminados.assign(n+1,1);
		
		for(int i=0;i<n-1;i++){
			
			cin>>nodeA>>nodeB;
			
			grafo[nodeA].push_back(nodeB);
			
		}
		
		dfs(1,-1);
		
		//analizamos si se elimina
		
		for(int i=1 ; i<=n ; i++){
			
			if(nodos_hijos[i].first>=1 && nodos_hijos[i].first<K){
				if(eliminados[i]==false)eliminacionDirecta(i);
			}
			
			if(nodos_hijos[i].first>K){
				eliminacionBusqueda(i);
			}
			
		}
		
		int contador =0;
		
		
		for(int i=1;i<eliminados.size();i++){
			if(eliminados[i]==true)contador++;
		}
		
		cout<<contador<<'\n';
		//final while
	}
	

}
