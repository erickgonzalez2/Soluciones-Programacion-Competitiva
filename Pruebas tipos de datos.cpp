#include <stdio.h>
#include <limits.h>
int main(){
	printf("Capacidad del short int %d bytes\n",sizeof(short int));
	printf("El rango del short int es de %hd a %hd",SHRT_MIN,SHRT_MAX);
	printf("\n%hd",32768);
	printf("\n%hd\n",-32769);
	
	//Unsigned short int
	printf("\nCapacidad del unsigned short int %d bytes\n",sizeof(unsigned short int));
	printf("El rango del unsigned short int es de %u a %u",0,USHRT_MAX);
	printf("\n%hu",65536);
	printf("\n%hu",-1);
	
	//int
	printf("\n\nCapacidad del int %d bytes\n",sizeof(int));
	printf("El rango del short int es de %d a %d",INT_MIN,INT_MAX);
	printf("\n%d",2147483648);
	printf("\n%d",-2147483649);
	
	//Unsigned int
	printf("\n\nCapacidad del unsigned int %d bytes\n",sizeof(unsigned int));
	printf("El rango del unsigned int es de %u a %u",0,UINT_MAX);
	printf("\n%hu",65536);
	printf("\n%hu",-1);
	
	//char
	printf("\n\nCapacidad del char %d bytes\n",sizeof(char));
	printf("El rango del short int es de %d a %d",CHAR_MIN,CHAR_MAX);
	printf("\n%c",-23);
	printf("\n%c",122);
	
	// Unsigned char
	printf("\n\nCapacidad del unsigde char %d bytes\n",sizeof(unsigned char));
	printf("El rango del short int es de %d a %d",0,UCHAR_MAX);
	printf("\n%c",-23);
	printf("\n%c",122);


	
	return 0;
}
