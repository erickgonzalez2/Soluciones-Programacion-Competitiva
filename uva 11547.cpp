#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int casos,n,nf;
	cin>>casos;
	for(int i=0;i<casos;i++){
		cin>>n;
		nf=n*567;
		nf=nf/9;
		nf=nf+7492;
		nf=nf*235;
		nf=nf/47;
		nf=nf-498;
		nf=nf/10;
		nf=nf%10;
		cout<<abs(nf)<<'\n';
	}
	return 0;
}
