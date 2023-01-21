#include <bits/stdc++.h>

using namespace std;

int grafo[41][41];
int recorrido[41][41];
int nodos = 0;


void dfs(int x,int y){
	
	recorrido[y][x] = 1;
	nodos--;
	//arriba
	
	if(y-1>=0){
		
		if(recorrido[y-1][x] == 0 && grafo[y-1][x] == 1){
			dfs(x,y-1);
		}
		
	}
	
	//abajo
	
	if(y+1<=40){
		
		if(recorrido[y+1][x] == 0 && grafo[y+1][x] == 1){
			dfs(x,y+1);
		}
		
	}
	
	//derecha
	
	if(x-1>=0){
		
		if(recorrido[y][x-1]== 0 && grafo[y][x-1] == 1){
			dfs(x-1,y);
		}
	}
	
	//izquierda
	
	if(x+1<=40){
		
		if(recorrido[y][x+1]== 0 && grafo[y][x+1] == 1){
			dfs(x+1,y);
		}
	}
	
}

int main(){
	
	int edges;

	int x,y,px,py;
	int xi,yi;
	
	while(cin>>edges && edges){
		
		bool band = false;
		memset(grafo,0,sizeof(grafo));
		memset(recorrido,0,sizeof(recorrido));
		
		while(edges--){
			
			if(!band){
				band = true;
				cin>>xi>>yi;
				yi = (yi-20)*-1;
				xi = xi+20;
				grafo[yi][xi]= 1;
				nodos++;
			}
			
			else{
				cin>>x>>y;
				y = (y-20)*-1;
				x = x+20;
				grafo[y][x]= 1;
				nodos++;
			}
			
		}
		
		dfs(xi,yi);
		
		for(int i= 0 ; i<41;i++){
			for(int j = 0; j<41;j++){
				cout<<grafo[i][j]<<" ";
			}
			cout<<'\n';
		}
		
	}
	
	
	
	
}
