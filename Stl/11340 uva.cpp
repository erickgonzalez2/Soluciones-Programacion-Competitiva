#include <bits/stdc++.h>
using namespace std;
int main(){	
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	int e_map;
	int p;
	string str;
	char key;
	int value;
	cin>>n;
	while(n--){
		map<char,int> leters;
		double sum=0;
		cin>>e_map;
		while(e_map--){
			cin>>key>>value;
			leters.insert({key,value});
		}
		cin>>p;
		cin.ignore();
		while(p--){
			getline(cin,str);
			for(auto it=str.begin();it!=str.end();it++){
				auto itr = leters.find(*it);
				if(itr!=leters.end())sum+=itr->second;
			}
		}
		sum/=100;
		cout <<fixed << setprecision(2) << sum<<"$"<<'\n';
	}	 
}
