#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	float elegir,torta,descuento2,total,descuento1,anadido,enfermedad;
	char dias,ingredientes;
	
	cin>>elegir;
	if(elegir<1 || elegir>4){
		cout<<"ERROR";
	}
	else{
	
	if(elegir==1){
		torta=15.00;
	}
	else if(elegir==2){
		torta=25.00;
	}
	 else if(elegir==3){
	 	torta=12.00;
	 }
	 else if(elegir==4){
	 	torta=15.00;
	 }
	 
	 
	 cin>>dias;
	 
	 if(dias== 'a'){
	 	descuento1=3.00;
	 }
	 else if(dias== 'b'){
	 	descuento1=5.00;
	 }
	 
	 else if(dias== 'c'){
	 	descuento1=8.00;
	 }
	 
	 cin>>enfermedad;
	 if(enfermedad==1){
	 	descuento2=2.00;
	 }
	 else if(enfermedad==2){
	 	descuento2=0.00;
	 }
	 
	 cin>>ingredientes;
	 if(ingredientes=='a'){
	 	anadido=2.00;
	 }
	 else if(ingredientes=='q'){
	 	anadido=2.50;
	 }
	 else if(ingredientes=='s'){
	 	anadido=0.00;
	 }
	 
	 total= torta-descuento1-descuento2+anadido;
	 cout<< setprecision(2) << total; 
}
	 return 0;

}
