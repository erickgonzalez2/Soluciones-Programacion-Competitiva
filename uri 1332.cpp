#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int cases;
	string str;
	
	cin>>cases;
	
	while(cases--){
		
		int one=0,two=0;
		
		cin>>str;
		
		if(str.size()==5)cout<<"3\n";
		
		else{
			
			if(str[0]=='o')one++;
			else if(str[0]=='t') two++;
			
			if(str[1]=='n')one++;
			else if(str[1]=='w')two++;
			
			if(str[2]=='e')one++;
			else if(str[2]=='o')two++;
			
			
			if(one>two)cout<<"1\n";
			else cout<<"2\n";
			
		}
		
	}
	
	
	
}
