#include <iostream>
using namespace std;
int main(){
	int nc,nt,mayor=0,menor=0,a;
	cin>>nc;
	for(int j=0;j<nc;j++){
		mayor=0;
		menor=0;
		cin>>nt;
		for(int i=0;i<nt;i++){
			cin>>a;
			if(i==0)menor=a;
			if(a>mayor)mayor=a;
			else if(a<menor)menor=a;
		}
		printf("%d\n",(mayor-menor)*2);
		}
	return 0;
}
