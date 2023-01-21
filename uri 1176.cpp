#include <iostream>
#include <limits>
#include <cstdio>
using namespace std;
int main(){
	unsigned long long int a[61];
	unsigned long long int ant=0,sum=0;
	a[0]= {0};
	a[1]= {1};
	a[2]= {1};
	ant = a[1];
	for(int i=3;i<=60;i++){
		sum= ant+a[i-1];
		a[i]=sum;
		ant= a[i-1];
	}
	int nc,nb;
	cin>>nc;
	while(nc--){
		cin>>nb;
		for(int i=0;i<=60;i++){
			if(nb==i){
			printf("Fib(%d) = %llu\n",i,a[i]);
		}
	}
	}
	return 0;	
}
