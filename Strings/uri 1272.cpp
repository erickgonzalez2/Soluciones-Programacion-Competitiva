#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int c;
	string str,word,final;
	cin>>c;
	cin.ignore();
	while(c--){
		
		getline(cin,str);
		istringstream iss(str);
		final="";
		
		while(iss>>word){
			final+=word[0];
		}
		cout<<final<<'\n';
	}
}
