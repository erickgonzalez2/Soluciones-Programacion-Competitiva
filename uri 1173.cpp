#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	cout<<"N[0] = "<<a<<'\n';
	for(int i=1;i<10;i++){
		a=a*2;
		cout<<"N["<<i<<"] = "<<a<<'\n';
	}
}
