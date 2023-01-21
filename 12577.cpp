#include <iostream>
using namespace std;
int main(){
	int i=0;
	string s;
	while(cin>>s){
		i++;
		if(s=="*")break;
		if(s=="Hajj")cout<<"Case "<<i<<": Hajj-e-Akbar"<<'\n';
		else if(s=="Umrah")cout<<"Case "<<i<<": Hajj-e-Asghar"<<'\n';
	}
	return 0;
}
