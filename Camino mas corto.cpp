#include <iostream>
#include <limits.h>
using namespace std;
int main(){
		int vertices;
	cin>>vertices;
	int grafo[vertices][vertices]; //matriz para ponderar peso
	int i,j;
	
	for(i=0;i<vertices;i++){
		for(j=0;j<vertices;j++){
			cin>>grafo[i][j];
		}
	}
	
	//matriz de adyacencia
	int fuente=0;
	int distancia[vertices]{INT_MAX};
	bool adyacencia[vertices]{false};
	
	
	//encontrar el camino más corto
	int min = INT_MAX, min_indice;
	
	 for (int v = 0; v < vertices; v++) {
	 	if (adyacencia[v] == false && distancia[v] <= min) 
	 } 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
