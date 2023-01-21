#include <stdio.h>
int main(){
	float r,r1,r2,r3,r4;
	scanf("%f",&r);
	r1=r+5;
	r2=r1*r1;
	r3=r2/(r/3);
	r4=r3*r3*r3;
	printf("%f %f %f %f %f",r,r1,r2,r3,r4);
	return 0;
}
