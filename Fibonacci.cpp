#include <iostream>
using namespace std;

int main(){
	int a=0,b=1,n,i,c;
	cin>>n;
	cout<<a+b<<'\n';
	for(i=1;i<n;i++){
		c=a+b;
		cout<<c<<'\n';
		a=b;
		b=c;
	}
	return 0;
}
