#include <iostream>
using namespace std;
int main(){
	long long int n,m,fac=1;
	while(cin>>n>>m){
	fac=1;
	for(int i=1;i<=n;i++){
	fac= fac*i;
	}
	n=fac;
	fac=1;
	for(int i=1;i<=m;i++){
		fac= fac*i;
	}
	m=fac;
	cout<<n+m<<'\n';
	}
}
