#include <iostream>
#include <string>
using namespace std;
int main(){
	int casos;
	int l,w,h;
	cin>>casos;
	string s[casos];
	for(int i=0;i<casos;i++){
		cin>>l>>w>>h;
		if(l<=20&&w<=20&&h<=20)s[i]="good";
		else s[i]="bad";
		}
	for(int i=0;i<casos;i++){
		cout<<"Case "<<i+1<<": "<<s[i]<<'\n';
	}
	return 0;
}
