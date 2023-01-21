#include <stdio.h>
int main(){
	float mayor=0,menor=0,prom=0;
	float peso;
	int i;
	for(i=0;i<7;i++){
		scanf("%f",&peso);
		prom+=peso;
		if(i==0){
			mayor=peso;
			menor=peso;
		}
		else{
			if(peso>mayor)mayor=peso;
			else if(peso<menor)menor=peso;
		}
	}
	prom=prom/7;
	printf("Peso promedio: %g\n",prom);
	printf("Peso mayor: %g\n",mayor);
	printf("Peso menor: %g\n",menor);
}
