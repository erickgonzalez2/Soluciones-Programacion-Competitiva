#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n%2==0 && m%2==0)cout<<"1\n";
	else if(n%2==1 && m%2==1)cout<<"1\n";
	else cout<<"0\n";
}
