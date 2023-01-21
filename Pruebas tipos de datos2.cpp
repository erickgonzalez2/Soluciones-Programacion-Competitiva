#include <stdio.h>
#include <float.h>
int main(){
	printf("\nLa capacidad del float es %d bytes",sizeof(float));
	printf("\nEl rango del float es de %f a %f",FLT_MIN,FLT_MAX);
	printf("\n Valor %f",24.6);
	printf("\n Valor %g",24.85);
	printf("\n Valor %0.3f",24.86986);
	printf("\n Valor %e ",24.86986);
	
		printf("\nLa capacidad del double es %d bytes",sizeof(double));
	printf("\nEl rango del float es de %lf a %lf",DBL_MIN,DBL_MAX);
	printf("\n Valor %lf",24.6);
	printf("\n Valor %lg",24.85);
	printf("\n Valor %0.3f",24.86986);
	printf("\n Valor %le ",24.86986);
	
	printf("\n\nLa capacidad del double es %d bytes",sizeof(long double));
	printf("\nEl rango del long double es de %lf a %lf",LDBL_MIN,LDBL_MAX);
	printf("\n Valor %llf",24.6);
	printf("\n Valor %llg",24.85);
	printf("\n Valor %0.3llf",24.86986);
	printf("\n Valor %lle ",24.86986);
	
	
	
	
	return 0;
}
