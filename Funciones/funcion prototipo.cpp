#include <stdio.h>
int sumar (int,int); //funcion prototipo

int main(){
	int a=20;
	int b=30;
	int s;
	s= sumar(a,b);
	printf("%d\n",s);
	return 0;
}

int sumar (int x,int y){
	int z=x+y;
	return z;
}

