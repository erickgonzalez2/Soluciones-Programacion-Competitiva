#include <stdio.h>

int busqueda_binaria(int v[],int a,int b,int x){
	if(a>=b){
		if(v[a]==x){
			return a;
		}
		else return -1;
	}
	if(v[(a+b)/2]==x){
		return (a+b)/2;
	}
	else if(v[(a+b)/2]<x){
			return busqueda_binaria(v,(a+b)/2,b,x);
		}
	else{
			return busqueda_binaria(v,a,(a+b)/2-1,x);
		}
	}


int main(){
	int posiciones;
	 
	scanf("%d",&posiciones);
	
	int arreglo[posiciones];
	
	for(int i=0;i<posiciones;i++){
		scanf("%d",&arreglo[i]);
	}
	int indice1;
	int indice2;
	int n;
	
	int buscar;
	
	scanf("%d %d %d",&indice1,&indice2,&n);
	
	buscar =busqueda_binaria(arreglo,indice1,indice2,n);
	
	printf("%d",buscar);
}
