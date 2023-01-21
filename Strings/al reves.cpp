#include <bits/stdc++.h>
using namespace std;
int main(){
	//ios_base::sync_with_stdio(false);cin.tie(0);
	string str;
	string s0;
	string f;
	int i=0;
	while(getline(cin,str)){
		istringstream iss(str);
		i=0;
		while(iss>>s0){
			if(i>0)cout<<" ";
			for(string :: iterator it=s0.end();it>=s0.begin();it--){
				f+=*it;
				i++;
		}	
		f.erase(0,1);
		cout<<f;
		f="";
		}
		cout<<'\n';
	}
	}
