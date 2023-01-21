#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	ios_base::sync_with_stdio(false);cin.tie(0);
	
	
	while(getline(cin,str)){
		
		char x;
		
		for(int i=0;i<str.size();i++){
			
			if(isalpha(str[i])){
				x = str[i];
				if(x>=65 && x<=90){
					
					for(int j=0;j<13;j++){
						x++;
						if(x>90)x=65;
					}
					str[i]=x;
				}
				else{
					for(int j=0;j<13;j++){
						x++;
						if(x>122)x=97;
					}
					str[i]=x;
				}
			}
			
		}
		cout<<str<<'\n';
	}
	
	
	
}
