#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a[20];
	for(int i=0;i<20;i++){
		cin>>a[i];
	}
	for(int i=0,j=19;i<20,j>=0;i++,j--){
		printf("N[%d] = %d\n",i,a[j]);
	}
}
