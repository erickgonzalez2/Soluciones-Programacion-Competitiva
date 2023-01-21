//binario recursivo
#include <stdio.h>

void binario(int n){
	if(n>=2){
		binario(n/2);
		printf("%d",n%2);
	}
	else{
		printf("%d",n);
	}
}
int main(){
	int num;
	scanf("%d",&num);
	binario(num);
}
