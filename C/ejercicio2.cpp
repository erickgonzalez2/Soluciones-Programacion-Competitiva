#include <iostream>

using namespace std;

int main(){
	
	int numVentas;
		
	
	cout<<"Ingrese el numero de ventas\n";
	
	cin>>numVentas;
	
	float ventas[numVentas];
	
	float menor200=0;	
	float mayor200=0;		
	float mayorIgual400=0;
	
	
	float venta;
	
	int i;
	
	for(i=0;i<numVentas;i++){
		
		cin>>venta;
		
		ventas[i]=venta;
		
		if(venta<=200){
			menor200++;			
		}
		
		else if(venta>200 && venta<400){
			mayor200++;			
		}
		
		else if(venta>=400){
			mayorIgual400++;			
		}
		
		
	}
	
	float sumTotal = 0;

	for(i = 0; i < numVentas;i++ ){
		
		sumTotal+=ventas[i];
	}
			
	
	
	cout<<"Total de ventas : "<<sumTotal<<"\n\n";
	
	cout<<"Ventas menores o iguales 200 : "<<menor200<<"\n\n";
	
	cout<<"Ventas mayores a 200 y menores a 400 : "<<mayor200<<"\n\n";
		
	cout<<"Ventas mayores o iguales a 400 : "<<mayorIgual400<<"\n\n";
}
