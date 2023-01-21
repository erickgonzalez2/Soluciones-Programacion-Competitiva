#include <bits/stdc++.h>
using namespace std;
int main(){
	
	string str;
	
	while(getline(cin,str)){
		
		string text="";
		string aux="";
		bool inicio=false;
		
		
		for(int i=0;i<str.size();i++){
			
			if(inicio){
				if(str[i]!='[' && str[i]!=']')aux+=str[i];
			}
			else{
				if(str[i]!='[' && str[i]!= ']')text+=str[i];
			}
			
			if(str[i]=='[' && !inicio){
				inicio=true;
			}
			
			else if(str[i]=='['&& inicio){
				text.insert(0,aux);
				aux="";
			}
			
			else if(str[i]==']' && inicio){
				inicio=false;
				text.insert(0,aux);
				aux="";
			}
			
			else if(i==str.size()-1){
				text.insert(0,aux);
				aux="";
			}
		}
			
		cout<<text<<'\n';	
		}
		
	}
