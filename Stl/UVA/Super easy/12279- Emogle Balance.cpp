#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int incre=0,decre=0,nc,a,j=0;
	cin>>nc;
	while(nc!=0){
		j++;
		for(int i=0;i<nc;i++){
			cin>>a;
			if(a==0)decre++;
			else{
				incre++;
			}
		}
		printf("Case %d: %d\n",j,incre-decre);
		cin>>nc;
		incre=0;
		decre=0;
	}
	return 0;	
}
