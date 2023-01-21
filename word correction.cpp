#include <bits/stdc++.h>
using namespace std;
int main(){
	
	string str;
	string word;
	bool blank = false;;
	
	while(getline(cin,str)){
		
		word="";
		
		for(int i=0;i<str.size();i++){
			
			if(str[i]==' '){
				if(str[i+1]=='.'||str[i+1]==',')continue;
				else word+=str[i];
			}
			else word+=str[i];
			
		}
		cout<<word<<'\n';
		
		
		
	}
	
	
	
}
