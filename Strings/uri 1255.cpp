#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int nc;
	cin>>nc;
	cin.ignore();
	map <char,int> freq;
	while(nc--){
		string str;
		getline(cin,str);
		for(int i=0;i<str.size();i++){
			str[i]=tolower(str[i]);
		}
		for(int i=0;i<str.size();i++){
			if(isalpha(str[i])){
			auto it= freq.find(str[i]);
			if(it!=freq.end())it->second++;
			else{
				freq.insert({str[i],1});
			}
		}
		}
		vector <int>max;
		for(auto it=freq.begin();it!=freq.end();it++){
			max.push_back(it->second);
		}
		sort(max.begin(),max.end(),greater <int>());
		int a=max[0];
		for(auto it=freq.begin();it!=freq.end();it++){
			if(it->second==a)cout<<it->first;
		}
		max.clear();
		freq.clear();
		cout<<'\n';
	}
}
