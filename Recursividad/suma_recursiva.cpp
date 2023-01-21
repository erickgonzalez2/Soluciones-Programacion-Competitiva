#include <stdio.h>

int sumar(int n){
	int suma = 0;
	if(n==1){
		suma=1;
	}
	else{
		suma= n+sumar(n-1);
	}
	return suma;
}

int main(){
	int num;
	int x;
	scanf("%d",&num);
	
	x = sumar(num);
	printf("%d",x);
}
