#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);	
	int n;
	int cas=1;
	int nm;
	int x;
	string str;
	
	cin>>n;
	while(n--){
	
	map <string,int> sparrow;
	string found;
	int days;
	
	cin>>nm;
	
	while(nm--){
		cin>>str>>x;
		sparrow.insert({str,x});
	}
	
	cin>>days;
	cin>>found;
	
	auto it=sparrow.find(found);
	
	cout<<"Case "<<cas++<<": ";
	
	if(it!=sparrow.end()){
		
		if(days>=it->second)cout<<"Yesss\n";
		else if(days+5>=it->second)cout<<"Late\n";
		else cout<<"Do your own homework!\n";
		
	}
	else cout<<"Do your own homework!\n";
	
	
	
	}
	
}
