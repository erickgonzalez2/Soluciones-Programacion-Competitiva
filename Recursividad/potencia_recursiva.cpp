#include <stdio.h>

int potencia(int n,int e){
	int p;
	if(e==0){
		p= 1;
	}
	else{
		p = n*potencia(n,e-1);
	}
	return p;
}

int main(){
	int num;
	int exp;
	int producto;
	scanf("%d %d",&num,&exp);
	producto = potencia(num,exp);
	printf("%d",producto);
}
