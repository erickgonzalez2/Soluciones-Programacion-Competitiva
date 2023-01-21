#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string str;
	string word;
	bool band= true;
	while(getline(cin,str)){
		if(str == "*")break;
		istringstream iss(str);
		char x = tolower(str[0]);
		while(iss>>word){
			if(x==tolower(word[0]))continue;
			else {band=false;break;}
		}
		if(band==true)cout<<"Y\n";
		else cout<<"N\n";
		band=true;
	}
}
