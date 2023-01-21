#include <stdio.h>
int area(int,int);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",area(a,b));
	return 0;
}
int area(int x,int y){
	int z=x*y;
	return z;
}
