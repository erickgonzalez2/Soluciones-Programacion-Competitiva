#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int cifra,n;
	string str;
	cin>>n;
	
	while(n--){
		cin>>str;
		cin>>cifra;
		
		int c;
		char x;
		
		for(int i=0;i<str.size();i++){
			c = str[i];
			for(int j=cifra;j>0;j--){
				c--;
				if(c==64)c=90;
			}
			x=c;
			cout<<x;
		}
		cout<<'\n';
	}
	
}
