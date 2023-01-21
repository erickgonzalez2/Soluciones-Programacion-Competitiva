#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin>>n;
	
	string str;
	
	cin.ignore();
	while(n--){
		
		set <char>diet;
		bool cheat = false;
		
		getline(cin,str);
		
		for(int i=0;i<str.size();i++){
			if(isalpha(str[i]))diet.insert(str[i]);
		}
		
		getline(cin,str);
		for(int i=0;i<str.size();i++){
			if(isalpha(str[i])){
				auto it = diet.find(str[i]);
				if(it==diet.end()){
					cheat = true;
					break;
				}
				else{
					diet.erase(it);
				}
			}
		}
		
		getline(cin,str);
		for(int i=0;i<str.size();i++){
			if(isalpha(str[i])){
				auto it = diet.find(str[i]);
				if(it==diet.end()){
					cheat = true;
					break;
				}
				else{
					diet.erase(it);
				}
			}
		}
		
		if(!cheat)for(auto itr = diet.begin();itr!= diet.end(); itr++){
			cout<<*itr;
		}
		else cout<<"CHEATER";
		cout<<'\n';
		
	}
}
