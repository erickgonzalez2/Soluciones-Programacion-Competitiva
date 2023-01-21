#include <stdio.h>
int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	if(a==1)printf("Total: R$ %.2f",b*4);
	else if(a==2)printf("Total: R$ %.2f",b*4.50);
	else if(a==3)printf("Total: R$ %.2f",b*5);
	else if(a==4)printf("Total: R$ %.2f",b*2);
	else if(a==5)printf("Total: R$ %.2f",b*1.50);
	return 0;
}
