#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int casos;
	string str;
	string word;
	int diamantes;
	int pos=-1;
	
	cin>>casos;
	cin.ignore();
	while(casos--){
		
		getline(cin,str);
		diamantes=0;
		word="";
		
		for(int i=0;i<str.size();i++){
			if(str[i]=='>' || str[i]=='<')word+=str[i];
		}
		
		while(!word.empty()){
			pos=-1;
			for(int i=0;i<word.size()-1;i++){
				if(word[i]=='<' && word[i+1]=='>'){
					diamantes++;
					pos=i;
					break;
				}
			}
				
			if(pos==-1)break;
			else word.erase(pos,2);
		}
			
			cout<<diamantes<<'\n';
			word.clear();
		}
		
		
	}
