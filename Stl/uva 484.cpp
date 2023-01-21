#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	vector <pair<string,int>>rep;
		set <string>numbers;
	while(getline(cin,str)){
	istringstream iss(str);
	string word;
	while(iss>>word){
			auto itr= numbers.find(word);
			
			if(itr!=numbers.end()){
				for(int i=0;i<rep.size();i++){
					if(word==rep[i].first)rep[i].second++;
				}
			}
			
			else{
				rep.push_back( make_pair(word,1));
				numbers.insert(word);
			}	
	}
	}
	for(auto it=rep.begin();it!=rep.end();it++){
		cout<<it->first<<" "<<it->second<<'\n';
	}
}
