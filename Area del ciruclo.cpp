#include <stdio.h>

int main(){
	double area;
	double pi=3.14159;
	double radio;
	scanf("%lf",&radio);
	area= pi*(radio*radio);
	printf("A=%.4lf\n",area);
	
	return 0;
}
