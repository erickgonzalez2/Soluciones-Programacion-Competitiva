#include <stdio.h>
int main(){
	double a,b,c,pe,area;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b){
		pe=a+b+c;
		printf("Perimetro = %.1f\n",pe);
	}
	else{
		area= ((a+b)*c)/2;
		printf("Area = %.1f\n",area);
		}
	return 0;
}
