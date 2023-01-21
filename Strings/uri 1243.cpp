#include <bits/stdc++.h>
using namespace std;
int main(){
	
	string str;
	
	while(getline(cin,str)){
		
		int sum = 0;
		int n = 0;
		string word;
		int prom = 0;
		bool is_str;
		
		istringstream iss(str);
		while(iss>>word){
			
			is_str = true;
			
			for(int i=0;i<word.size();i++){
				
				if(!isalpha(word[i])){
					if(i!=word.size()-1){						
						is_str = false;
						break;
					}
					else{
						if(word[i]!='.'){
							is_str = false;
							break;
						}
					}
				}
			}
			
			if(is_str){
				n++;
				if(word[word.size()-1]!='.')sum+=word.size();
				else sum+=word.size()-1;
			}
		}
		if(n!=0)prom = sum/n;
		
		if(prom<=3)cout<<"250\n";
		else if(prom==4 || prom==5)cout<<"500\n";
		else if(prom>=6)cout<<"1000\n";
		
	}
}
