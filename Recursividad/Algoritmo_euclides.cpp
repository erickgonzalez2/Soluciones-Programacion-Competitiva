#include <stdio.h>

int mcd(int u,int v){
	int aux;
	while(u>0){
		if(u<v){
			aux=u;u=v;v=aux;
		}
		u-=v;
	}
	return v;
}
int main(){
	int x,y;
	int m;
	scanf("%d %d",&x,&y);
	m = mcd(x,y);
	printf("%d",m);
}

