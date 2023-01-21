#include <iostream>
#include <string>
using namespace std;
int main(){
	int i,n,acum=0,a;
	string c;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>c;
		if(c=="donate"){
			cin>>a;
			acum=acum+a;
		}
		if(c=="report")cout<<acum<<'\n';
	}
}
