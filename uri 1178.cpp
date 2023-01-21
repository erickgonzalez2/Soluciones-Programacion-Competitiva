#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double a;
	cin>>a;
	printf("N[0] = %.4f\n",a);
	for(int i=1;i<100;i++){
		a=a/2;
		printf("N[%d] = %.4f\n",i,a);
	}
}
