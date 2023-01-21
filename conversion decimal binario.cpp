#include <stdio.h>
#include <stdlib.h>
int main() { 

long long int i,c=0,numero; 
long long int binario[63]; 
scanf("%lld",&numero); 

		for (i=0;i<63;i++) { 
		c++;
		binario[i]=numero%2; 
		numero=numero/2; 
		if(numero==0) 
		break; 
		} 

		for(i=c-1;i>=0;i--) { 
		printf("%lld",binario[i]); 
		}
		printf("\n"); 
	return 0;
}
