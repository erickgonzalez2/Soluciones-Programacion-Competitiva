#include <bits/stdc++.h>

using namespace std;

float cuadrado(float n){
	return n*n;
}

float rectangulo(float a,float b){
	return a*b;
}

float triangulo(float a,float b){
	return (a*b)/2;
}
float circulo(float r){
	return 3.1416*r*r;
}

int main(){
	int t;
	

	float sum = 0;
	cin>>t;
	float x,y;
	int a;
	while(t--){
		cin>>a;
		
		switch(a){
			case 1:
				cin>>x;
				sum += cuadrado(x);
				break;
			case 2:
				cin>>x>>y;
				sum += rectangulo(x,y);
				break;
				
			case 3:
				cin>>x;
				sum+= circulo(x);
				break;
				
			case 4:
				cin>>x>>y;
				sum+= triangulo(x,y);
			
		}
		printf("%.2f\n",sum);
	}
	
	
	
	
	
	
	
	
	
}
