#include <bits/stdc++.h>

using namespace std;

int main(){
			
	int t;
	string str,s0;
	while(cin>>t,t){
						
		cin.ignore();
		
		vector<pair<string,string>>words;
		
		while(t--){
			
		getline(cin,str);
		getline(cin,s0);
		words.push_back(make_pair(str,s0));		
		}
		
		getline(cin,str);					
			
			for(auto it= words.begin();it!=words.end();it++){
												
				s0 = it->first;				
				size_t found = str.find(s0);
				
				while(found!=string::npos){									
				str.replace(found,s0.size(),it->second);				
				found = str.find(s0);					
			}																
		}
			
			cout<<str<<'\n';
	}
}
