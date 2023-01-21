#include <stdio.h>
int main(){
	//Recibiendo enteros
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Los datos introducidos son %d y %d\n",a,b);
	 //Recibiendo flotantes
	float c,d;
	scanf("%f",&c);
	scanf("%f",&d);
	printf("\n\nLos datos introducidos son %g y %g\n",c,d);
	
	
	//Recibiendo char
	char e,f;
	scanf("%c %c",&e,&f);
	printf("\nLos datos introducidos son %d y %d",e,f);
	return 0;
}
