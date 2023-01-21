#include <iostream>
#include <string>
using namespace std;

int main(){
	string a="safasdad";
	int i=0;
	for(string :: iterator it=a.begin();it!=a.end();it++){
		i++;
	cout<<*it<<'\n';
	}
	cout<<"Numero de caracteres: "<<i;
}
