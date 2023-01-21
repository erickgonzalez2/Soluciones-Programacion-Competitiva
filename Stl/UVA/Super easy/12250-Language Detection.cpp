#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1;
	int i=1;
	while(1){
		cin>>s1;
		if(s1=="#")break;
		else if(s1=="HELLO")cout<<"Case "<<i<<": ENGLISH";
		else if(s1=="HOLA")cout<<"Case "<<i<<": SPANISH";
		else if(s1=="HALLO")cout<<"Case "<<i<<": GERMAN";
		else if(s1=="BONJOUR")cout<<"Case "<<i<<": FRENCH";
		else if(s1=="CIAO")cout<<"Case "<<i<<": ITALIAN";
		else if(s1=="ZDRAVSTVUJTE")cout<<"Case "<<i<<": RUSSIAN";
		else cout<<"Case "<<i<<": UNKNOWN";
		i++;
		cout<<'\n';
	}
}
