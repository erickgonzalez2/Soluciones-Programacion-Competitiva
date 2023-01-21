#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	int l;
	string str;
	cin>>n;
	
	cin.ignore();
	while(n--){
		
		getline(cin,str);
		string s0="";
		l = str.size();
		if(l%2==1)l++;
		l/=2;
		
		for(int i=l-1;i>=0;i--){
			s0+=str[i];
		}
		
		for(int i=str.size()-1;i>=l;i--){
			s0+=str[i];
		}
		cout<<s0<<'\n';
	}
	
	
}
