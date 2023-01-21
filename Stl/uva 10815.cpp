#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	set <string> Set;
	string str;
	while(getline(cin,str)){	
	for(int i=0;i<str.size();i++){
		if(isalpha(str[i]))str[i]= tolower(str[i]);
		else{
			str[i]=' ';
		}
		}
	istringstream iss(str);
	string word;
	while(iss>>word){
		Set.insert(word);
	}
	}
	for(auto it=Set.begin();it!=Set.end();it++){
		cout<<*it<<"\n";
	}
}
