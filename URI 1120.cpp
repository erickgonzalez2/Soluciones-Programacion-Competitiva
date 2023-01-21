#include <iostream>
#include <string>
using namespace std;

string quitar(string,string);

int main(){
	string a,b;
	cin>>a>>b;
	if(a=="0" && b=="0")return 0;
	while(1){
		quitar(a,b);
		cin>>a>>b;
		if(a=="0" && b=="0")return 0;
	}
	return 0;
}


string quitar(string x,string y){
	int index;
	int limit= y.length();
	for(string :: iterator it=y.begin();it!=y.end();it++){
		y.erase(it);
 }
	if(y.empty())cout<<"0";
	else cout<<y;
}
