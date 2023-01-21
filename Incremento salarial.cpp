#include <iostream>
using namespace std;
int main(){
	float a;
	cin>>a;
	if(a>=0 && a<=400.00){
		printf("Novo salario: %.2f\n",a+(a*0.15));
		printf("Reajuste ganho: %.2f\n",(a*0.15));
		printf("Em percentual: 15 %\n");
	}
	
	else if(a>=400.01 && a<=800.00){
		printf("Novo salario: %.2f\n",a+(a*0.12));
		printf("Reajuste ganho: %.2f\n",(a*0.12));
		printf("Em percentual: 12 %\n");
	}
		else if(a>=800.01 && a<=1200.00){
		printf("Novo salario: %.2f\n",a+(a*0.10));
		printf("Reajuste ganho: %.2f\n",(a*0.10));
		printf("Em percentual: 10 %\n");
	}
	else if(a>=1200.01 && a<=2000.00){
		printf("Novo salario: %.2f\n",a+(a*0.07));
		printf("Reajuste ganho: %.2f\n",(a*0.07));
		printf("Em percentual: 7 %\n");
	}
	else if(a>2000.00){
		printf("Novo salario: %.2f\n",a+(a*0.04));
		printf("Reajuste ganho: %.2f\n",(a*0.04));
		printf("Em percentual: 4 %\n");
	}
	return 0;
}
