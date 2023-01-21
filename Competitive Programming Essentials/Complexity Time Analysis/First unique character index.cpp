#include <bits/stdc++.h>

using namespace std;

int main(){
		
	string str;
	
	cin>>str;
	
	unordered_map<char,int> nonRepMap;
	
	list<char>nonRepList;
	
	for(int i=0;i<str.length();i++){
		
		if(nonRepMap.count(str[i])==0){
			nonRepMap[str[i]] = i;
			nonRepList.push_back(str[i]);
		}
		else{
			nonRepList.remove(str[i]);
		}
	}
	
	if(nonRepList.empty()){
		cout<<"-1\n";
	}	
	else{
		cout<<nonRepMap[nonRepList.front()];
	}
}
