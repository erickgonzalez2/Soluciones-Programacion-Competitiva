#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	long long int num;
	
	while(getline(cin,str)){
		
		
		string aux = "";
		
		if(str.empty())cout<<"error\n";
		
		else {
			
		bool error=false;
			
		for(int i=0;i<str.size();i++){
			
			
				
			if(str[i]=='O'|| str[i]=='o')aux+="0";
			
			else if(isdigit(str[i]))aux+=str[i];
			
			else if(str[i]=='l')aux+="1";
			
			else if(str[i]==' ' || str[i]==',')aux+="";
			
			else{
				cout<<"error\n";
				error=true;
				break;
			}
			
			}
			
			if(!error){
			
			istringstream  iss(aux);
			iss>>num;
			
			if(num>2147483647)cout<<"error\n";
			else cout<<num<<'\n';
			
		}
		}
	}
	
}
