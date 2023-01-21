#include <iostream>
#include <string>
using namespace std;
int main(){
	char c[];
	char elim;
	cin>>elim;
	cin>>c;
	while(c!= "0" && elim != '0' ){
	c.erase(elim);
	cout<<c;
	cin>>elim;
	cin>>c;
	}
	
}
