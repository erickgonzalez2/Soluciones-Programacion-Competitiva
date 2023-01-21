#include <bits/stdc++.h>
using namespace std;

vector <vector <int> > grafo;
vector <char> lamps;
char cr;
int light [9999];
int cont;
bool salir;
bool f;
bool enc;
int v;

void dfs(int mino,int tadeo, int lamp){
	cont++;
	for(int j=0;j<(int)grafo[mino].size();j++){
		v = grafo[mino][j];
		
		if(cont == lamp){
			light[mino]= 1;
		}
		
		if(v!= tadeo && light[v] != 1){
		if(cont==lamp){
			cont = 0;
			char nodo = mino+65;
			lamps.push_back(nodo);
			}
		 salir=true;
		}
		if(salir){
			salir=false;
			f=true;
			enc=true;
			break;
		}
		else {
			cr=mino+65;
			enc=false;
			break;
		}
	}
	if(f){
	f=false;
	dfs(v,mino,lamp);		
	}
}

int main(){
	
	string cadena;
	
	while(cin>>cadena && cadena[0] !='#'){
		
		grafo.assign(1000, vector <int>());
		char minotauro;
		char tadeo;
		int lamparas;
		cin>> minotauro >> tadeo >> lamparas;
		
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
			int minotaurus = minotauro-65;
			int tadeus = tadeo-65;
			cont = 0;
			memset(light, 0, sizeof(light));
			salir = false;
			enc=true;
			dfs(minotaurus,tadeus,lamparas);
			for(char xy:lamps){
				cout<<xy<<" ";
			}
			cout<<"/"<<cr<<'\n';
			lamps.clear();
		

	}
	
}
