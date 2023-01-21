#include <iostream>
#include <wchar.h>
using namespace std;
int main(){
	
	string str;
	bool first=true;
	bool second=false;
	while(getline(cin,str)){
		
		for(int i=0;i<str.length();i++){
			if(str[i]!='\"')cout<<str[i];
			else{
				if(first){
					cout<<"``";
					first=false;
					second=true;
				}
				else{
					cout<<"''";
					first=true;
					second=false;
				}
			}
		}
		cout<<'\n';
	}
}
