#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,o=0,t=0,tr=0;
	string s;
	cin>>n;
	while(n--){
		cin>>s;
		if(s[0]=='t')t++;
		if(s[0]=='o')o++;
		if(s[1]=='n')o++;
		if(s[1]=='w')t++;
		if(s[2]=='o')t++;
		if(s[2]=='e')o++;
		if(s.length()==5)cout<<'3'<<'\n';
		else if(o>t)cout<<'1'<<'\n';
		else if(o<t)cout<<'2'<<'\n';
		t=0;
		o=0;
	}
	}
