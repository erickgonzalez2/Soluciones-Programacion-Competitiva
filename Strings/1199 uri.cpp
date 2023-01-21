#include <iostream>
#include <string>
#include <string.h>
#include <ctype.h>

using namespace std;
int main(){
	string a;
	int i=1;
	int j;
	char x[100];
	while(i>=0){
		cin>>a;
		if(a[0]=='0' && a[1] == 'x'){
			i= stoi(a,nullptr,16);
			cout<<i<<'\n';
		}

		else{
		i= stoi(a,nullptr,10);
		if(i<0)return 0;
		itoa(i,x,16);
		strupr(x);
		cout<<"0x"<<x<<'\n';	
		}
	}
}
