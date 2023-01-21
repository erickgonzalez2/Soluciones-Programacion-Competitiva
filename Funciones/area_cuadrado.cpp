#include <stdio.h>
int area(int x);
int main(){
	int a;
	scanf("%d",&a);
	printf("%d\n",area(a));
	return 0;
}
int area(int x){
	int z=x*x;
	return z;
}
