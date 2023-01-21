#include <iostream>
using namespace std;
int main(){
	int num,fibo,a=1,b=0,cont=0,j,i;
	cin>>num;
	
		for(i=0;i<=num;i=fibo){
			fibo=a+b;
			if(fibo>=num)break;
			//cout<<fibo<<" ";
			b=a;
			a=fibo;
			cont++;
					}	
				
	int fib[cont];
	a=1, b=0;
//	cout<<"\n \n";
	for(i=0,j=0;i<=num;i=fibo,j++){
		fibo=a+b;
			if(fibo>=num)break;
			b=a;
			a=fibo;
			fib[j]=fibo;
	}
	char band='F';
	for(i=1;i<num;i++){
	band='F';
	j=0;
	while(band =='F'&& j<cont){
		if(fib[j]==i){
			band='V';
		}
		j++;	
		}
		if(band=='F')cout<<i<<" ";
	}
	return 0;
}
