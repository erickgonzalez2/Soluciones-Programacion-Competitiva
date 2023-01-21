#include <iostream>
#include <string> 
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int i;
	int l,l2,l3;
	string a,b;
	cin>>i;
	string c;
	
	while(i--){
		cin>>a>>b;
		l=a.length();
		c=a+b;
		l2=c.length()-b.length();
		swap(c[l-1],c[l2]);
		cout<<c<<'\n';
	}
}
