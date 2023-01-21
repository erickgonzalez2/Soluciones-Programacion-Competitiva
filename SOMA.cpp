#include <stdio.h>
int main(){
	int a,b;
	float c;
	int d,e;
	float f;
	scanf("%d %d %f %d %d %f",&a,&b,&c,&d,&e,&f);
	printf("VALOR A PAGAR: R$ %.2f\n",b*c+e*f);
	
	return 0;
}
