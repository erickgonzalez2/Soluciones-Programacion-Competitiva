#include <stdio.h>

int mcd(int u,int v){
	long int aux;
	while(u>0){
		if(u<v){
			aux=u;
			u=v;
			v=aux;
		}
		u-=v;
	}
	return v;
}

struct fraction{
	long int denominador;
	long int numerador;
};

int main(){
	long int x,y;
	long int m;
	scanf("%ld %ld",&x,&y);
	fraction fraccion;
	m = mcd(x,y);
	if(x>y){
		fraccion.denominador= x/m;
		fraccion.numerador= y/m;
		
	}
	else{
		fraccion.denominador= y/m;
		fraccion.numerador = x/m;
	}
	
	printf("%4ld\n",fraccion.numerador);
	printf("-------------------\n");
	printf("%4ld\n",fraccion.denominador);
	
}
