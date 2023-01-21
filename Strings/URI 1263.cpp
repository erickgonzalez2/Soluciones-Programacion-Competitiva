#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	
	string str;
	
	while(getline(cin,str)){
		
		bool pa=false;
		bool enc= false;
		int al=0;
		char n='1';
		
		for(int i=0;i<str.size();i++){
			
			if(isalpha(str[i]) && !pa){
				if(str[i]<97)str[i]+=32;
				if(str[i]==n ){
				
				if(!enc){
					al++;
					enc=true;
				}

				}
				
				else  enc=false;
				
				n = str[i];
				pa = true;
			}
			
			else if(isblank(str[i])){
				pa=false;
			}
			
			
			
			
			
		}
		
		cout<<al<<'\n';
	}
}
