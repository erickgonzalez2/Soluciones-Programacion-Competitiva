#include <bits/stdc++.h>
using namespace std;
int main(){
	
	string str;
	while(cin>>str && str!="0"){
		
		int sum;
		int x;
		char c[1];
		
		while(str.length()!=1){
			sum=0;
			for(int i=0;i<str.length();i++){
				c[0] = str[i];
				x = atoi(c);
				sum+=x;
			}
			str = to_string(sum);
		}
		
		cout<<str<<'\n';
	}
}
