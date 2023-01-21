#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<char,int> &a, const pair<char,int> &b){
	if(a.second>b.second){
		 return true;
	}
	else if(a.second==b.second){
		return a.first<b.first;	
	} 
	else return false;	
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	map<char,int>letra;
	vector<pair<char,int>>ans;
	int n;
	string str;
	cin>>n;
	cin.ignore();
	while(n--){
		getline(cin,str);
		letra.clear();
		ans.clear();
		for(int i=0; i<str.size();i++)if(isalpha(str[i])){
		letra[tolower(str[i])]++;
		}
		
		for(auto it=letra.begin();it!=letra.end();it++){
			ans.push_back((*it));
		}
		sort(ans.begin(),ans.end(),comp);
		int max= (*ans.begin()).second;
		for(auto it=ans.begin();it!=ans.end();it++){
			if(max==(*it).second)cout<<(*it).first;
		}
		cout<<'\n';
			}	
}
