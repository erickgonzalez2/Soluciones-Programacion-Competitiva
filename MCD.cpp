#include <iostream>
using namespace std;

int main(){
	int dividendo, divisor,resto, i,resdiv,resul,numc;
	cin>>numc;
	for(int i=0;i<numc;i++){
	cin >> dividendo >>divisor;
	resto= dividendo%divisor;
	if(resto==0){
		cout<<divisor<<'\n';
	}
	else{
		while(resto!=0){
			resul=dividendo/divisor;
			dividendo=divisor;
			divisor=resto;
			resto= dividendo%divisor;
		}
		cout<<divisor<<'\n';
	}
}
	return 0;
}

