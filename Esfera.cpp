#include <stdio.h>
int main(){
	double pi=3.14159;
	int radio;
	scanf("%d",&radio);
	double volumen;
	volumen= (4.0/3)*pi*radio*radio*radio;
	printf("VOLUME = %.3lf\n",volumen);
	
	return 0;	
}
