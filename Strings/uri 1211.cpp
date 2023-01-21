#include <bits/stdc++.h>
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);
	
	int np;
	string s0,s1;
	while(cin>>np){
	
		cin>>s0;
		
		int max=0;
		
		for(int i=0;i<np-1;i++){
			
			cin>>s1;
			
			for(int j=0;j<s0.size();j++){
				
				if(s0[j]==s1[j])max++;
				
			}
			s0=s1;
		}
		cout<<max<<'\n';
	}
	
	
}
