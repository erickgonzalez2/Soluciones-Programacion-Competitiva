#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string str;
	
	while(getline(cin,str)){
		
		string a="",b="";
		bool readA = true;
		for(int i=0;i<str.size();i++){
			
			if(isdigit(str[i])&&readA){
				a+=str[i];
			}
			
			else{
				readA=false;
			}
			
			
			if(isdigit(str[i])&&!readA){
				b+=str[i];
			}
			
		}
		long long int valA = a.size();
		long long int valB = b.size();
		bool big = false;
		cout<<str<<'\n';
		if(valA>10){
			big = true;
			cout<<"first number too big\n";
		}
		
		if(valB>10){
			big = true;
			cout<<"second number too big\n";
		}
		
		if(big)cout<<"result too big\n";
	}
	
}
