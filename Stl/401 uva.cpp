#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	string str;
	bool reverse;
	bool palindrome;
	
	map<char,char>inversos;
	inversos.insert({'A','A'});
	inversos.insert({'E','3'});
	inversos.insert({'H','H'});
	inversos.insert({'I','I'});
	inversos.insert({'J','L'});
	inversos.insert({'L','J'});
	inversos.insert({'M','M'});
	inversos.insert({'O','O'});
	inversos.insert({'S','2'});
	inversos.insert({'T','T'});
	inversos.insert({'U','U'});
	inversos.insert({'V','V'});
	inversos.insert({'W','W'});
	inversos.insert({'X','X'});
	inversos.insert({'Y','Y'});
	inversos.insert({'Z','5'});
	inversos.insert({'1','1'});
	inversos.insert({'2','S'});
	inversos.insert({'3','E'});
	inversos.insert({'5','Z'});
	inversos.insert({'8','8'});
	
	
	
	while(cin>>str){
		
	
		
		reverse = true;
		palindrome = true;
		
		int i=0;
		int j=str.size()-1;
		
		while(i<j){
			
			if(palindrome){				
				if(str[i]!=str[j]){
					palindrome=false;
				}
				
			}
			
			if(reverse){
				if(inversos.find(str[i])->second!=str[j]){
					reverse=false;
				}
			}
			
			i++;
			j--;
			
			if(i==j){
				if(inversos.find(str[i])->second!=str[j]){
					reverse=false;
				}
			}			
		}
		
		if(str.size()==1){
			if(inversos.find(str[0])->second!=str[0])reverse=false;
		}
		
		cout<<str<<" -- ";
		
		if(palindrome && reverse)cout<<"is a mirrored palindrome.";
		
		else if(!palindrome && reverse)cout<<"is a mirrored string.";
		
		else if(palindrome && !reverse)cout<<"is a regular palindrome.";
		
		else cout<<"is not a palindrome.";
		
		
		cout<<'\n';
		cout<<'\n';
		
	}
	
	
}
