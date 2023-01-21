#include <bits/stdc++.h>
using namespace std;

int main(){
	
	
	string str;
	string f;
	while(getline(cin,str)){
		
		string s1="";
		for(int i=0;i<str.size();i++){
			if(str[i]==' ')s1+='0';
			
			else if(str[i]=='o')s1+='1';
		}
		
		if(s1!=""){			
			char n = stoi(s1,nullptr,2);
			f+=n;			
		}		
	}
	cout<<f;
}
