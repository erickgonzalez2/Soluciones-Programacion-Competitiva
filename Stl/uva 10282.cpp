#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	map<string,string> dic;
	string str;
	string a,b;
	string word;
	while(getline(cin,str)){ 
		if(str=="")break;
		istringstream ss(str);
		ss>>a>>b;
		dic[b]=a;
	}
	while(cin>>word){
		auto itr= dic.find(word);
		if(itr!=dic.end()){
			cout<<itr->second<<'\n';
		}
		else cout<<"eh\n";
	}
}
