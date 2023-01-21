#include <iostream>
using namespace std;
int main(){
	int n,mayor,mi;
	for(int i=1;i<=100;i++){
	cin>>n;
	if(i==1)mayor=n;
	if(n>mayor){
		mayor=n;
		mi=i;
	}
	}
	cout<<mayor<<'\n'<<mi<<'\n';
}
