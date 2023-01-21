#include <iostream>
#include <string>
using namespace std;

int total=0;

int leds(char);

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int a;
	string s;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>s;
		total=0;
		for(int j=0;j<s.length();j++){
			leds(s[j]);
		}
		cout<<total<<" leds"<<'\n';
	}
}


int leds(char x){
	int c=0;
	if(x=='1')c+=2;
	if(x=='2' || x=='3'|| x=='5')c+=5;
	if(x=='4')c+=4;
	if(x=='6' || x=='9' || x=='0')c+=6;
	if(x=='7')c+=3;
	if(x=='8')c+=7;
	total=total+c;
}
