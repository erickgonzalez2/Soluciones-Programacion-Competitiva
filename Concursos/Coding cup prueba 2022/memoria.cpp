

#include <bits/stdc++.h>

using namespace std;


int main(){
	
	
	int arreglo[10];
		
	
	for(int i=0;i<10;i++){
		arreglo[i]=i+1;
	}
	
	
	for(int i=0;i<10;i++){
		printf("Direccion : %pn",(void*)&arreglo[i]);
		cout<<'\n';		
		cout<<"Bytes utilizados "<<sizeof(arreglo[i])<<'\n';
		
	}
	
	string rs[]= {"a","b","c","d","e","f"};
	
	for(int i=0;i<6;i++){
		printf("Direccion : %pn",(void*)&rs[i]);
		cout<<'\n';		
		cout<<"Bytes utilizados "<<sizeof(rs[i])<<'\n';
		
	}
	
	cout<<"Direccion del primer arreglo "<<arreglo<<'\n';
	cout<<"Bytes utilizados "<<sizeof(arreglo)<<'\n';
	
	cout<<"Direccion del primer arreglo "<<rs<<'\n';
	cout<<"Bytes utilizados "<<sizeof(rs)<<'\n';
}
