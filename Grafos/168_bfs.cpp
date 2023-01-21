#include <bits/stdc++.h>
using namespace std;

vector <vector <int> > grafo;
int light [9999];
int cont;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string cadena;
	
	while(cin>>cadena && cadena[0]!='#'){
		
		queue <int> q;
		char minotauro;
		char tadeo;
		int lamp;
		grafo.assign(1000, vector <int>());
		
		cin>> minotauro >> tadeo >> lamp;
		
		for(int i=0; i<(int)cadena.size();i++){
			
			if(cadena[i]==':' || cadena[i]=='.'){
				int nodoPrincipal = cadena[i-1]-65;
				for(int j=i+1; j<(int)cadena.size();j++){
					if(cadena[j]==';'|| cadena[j]=='.'){
						break;
					}else{
						int nodoComunidado = cadena[j]-65;
						grafo[nodoPrincipal].push_back(nodoComunidado);
					}
				}
			}	
		}
		
		bool salir;
		char cr;
		int minotaurus = minotauro-65;
		int tadeus = tadeo-65;
		cont = 0;
		memset(light, 0, sizeof(light));
		
		q.push(minotaurus);
		salir=false;
		while(!q.empty()){
		int u=q.front();q.pop();
		
		for(int i=0;i<grafo[u].size();i++){
			
			
			int v=grafo[u][i];
			
			if(v!=tadeus && light[v]!=1){
				q.push(v);
				tadeus=u;
				cont++;
				salir=true;
			}
			if(cont==lamp){
				light[u]=1;
				cont=0;
				char nodo= u+65;
				cout<<nodo<<" ";
			}
			
			if(salir){
				salir=false;
				break;
			}
		}
		cr=u+65;
}		
		cout<<"/"<<cr<<'\n';
	}
}
