#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	vector<int> numeros;
	
	
	cin>>str;
	
	for(int i=0;i<str.size();i++){
		
		
		numeros.push_back(str[i]-48);
		
	}
	
	sort(numeros.begin(),numeros.end(),greater<int>());
	
	for(int i:numeros){
		cout<<i;
	}
}
