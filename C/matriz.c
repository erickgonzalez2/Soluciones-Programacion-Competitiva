#include <stdio.h>

int main(){
	
	int arreglo[10];				
	
	int i;
	int mayor = 0;	
	printf("Ingrese 10 numeros \n\n");
	
	for(i=0;i<10;i++){		
			scanf("%d",&arreglo[i]);		
			if(arreglo[i]>mayor){
				mayor=arreglo[i];
			}
	}
	
	
	int band = 0;
	int x = arreglo[0];
	
	for(i=1;i<10;i++){
		
		if (i==1){
			if(x>arreglo[i])band = 0;//decreciente
			
			else if(x<arreglo[i])band = 1;//creciente
						
		}
		
		else{
			
			x = arreglo[i-1];
			
			if(band==0){ // creciente
				
				if(x<arreglo[i]){
					
					band = 2;
					break;
				}
				
			}
						
			else if(band==1){
				
				if(x>arreglo[i]){
					band = 2;
					break;
				}
				
			}
			
		}
		
	}
			
	for(i=0;i<10;i++){
		
		if(x!=arreglo[i])break;
		
		if(i==9){
			band = 3;
		}
		
	}
	
	if(band==0){
		printf("\nLos numeros estan en orden decreciente\n");			
	}
	else if(band==1){
		printf("\nLos numeros estan en orden creciente\n");
	}
	
	else if(band==2){
		printf("\nLos numeros no estan en ningun orden\n");
	}
	
	else{
		printf("\nTodos los numeros son iguales\n");
	}
	
	printf("\nEl numero mayor es %d ",mayor);

}
