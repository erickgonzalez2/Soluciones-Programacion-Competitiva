#include <stdio.h>
#include <math.h>
double area(double);
int main(){
	double radio;
	scanf("%lf",&radio);
	printf("%lf",area(radio));
	return 0;
}
double area(double x){
	double z;
	z= M_PI* pow(x,2);
	return z;
}
