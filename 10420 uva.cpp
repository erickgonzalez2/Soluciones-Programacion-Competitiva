#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	multimap <string,string> c-ountries;
	string s0,s1;
	
	string temp = "";
	string temp2 = "";
	
	
	int cont = 0;
	
	cin>>n;
	
	while(n--){
		cin>>s0;
		cin.ignore();
		getline(cin,s1);
		countries.insert(pair<string,string>(s0,s1));		
		
	}
	
	
	
	for(auto it=countries.begin();it!=countries.end();it++){
		
		if(temp!="" && temp!= it->first){
			
			
			cout<<temp<<" "<<cont<<'\n';
			cont = 0;
		}
		
		temp = it->first;
		temp2 = it->second;
		cont++;				
	}
	cout<<temp<<" "<<cont<<'\n';
	
	
}
