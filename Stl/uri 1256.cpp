#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int casos;
	cin>>casos;
	
	while(casos--){
		ios_base::sync_with_stdio(false);cin.tie(0);
		int range,num;
		
		vector<vector<int>>hash;
		
		cin>>range>>num;
		int pos,x;
		
		hash.assign(range,vector <int>());
		
		while(num--){
			cin>>x;
			pos = x%range;
			hash[pos].push_back(x);
		}
		
		for(int i=0;i<hash.size();i++){
			cout<<i<<" -> ";
			for(int j=0;j<hash[i].size();j++){
				cout<<hash[i][j]<<" -> ";
			}
			cout<<"\\";
			cout<<'\n';
		}
		
		if(casos)cout<<'\n';
		
		
		
	}
	
	
}
