#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int etapas;
	int min ;
	int mini;
	
	cin>>etapas;
	min = etapas;
	mini = 0;
	
	for(int i = 1;i<8;i++){
		
		cin>>etapas;
		
		if(etapas<min){
			min = etapas;
			mini = i;
		}
	}
	
	switch(mini){
		
		case 0:
			cout<<"Inicial\n";
			break;
		case 1:
			cout<<"Colocar paracaidas\n";
			break;
		case 2:
			cout<<"Subida al avion\n";
			break;
		case 3:
			cout<<"Despegue\n";
			break;
		case 4:
			cout<<"Salto\n";
			break;
		case 5:
			cout<<"Apertura de paracaidas\n";
			break;	
		case 6:
			cout<<"Aterrizaje\n";
			break;
		case 7:
			cout<<"Recuperacion\n";
			break;
	}

}
