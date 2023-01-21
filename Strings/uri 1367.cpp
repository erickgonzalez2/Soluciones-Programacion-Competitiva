#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	char id;
	char ant;
	int t,sum,in,tot;
	string juicio;
	
	while(cin>>n && n){
		
		sum=0;
		tot=0;
		in=0;
		ant='9';
		
		while(n--){
			
			cin>>id>>t>>juicio;
			
			if(id!=ant)in=0;
			
			if(juicio == "correct"){
				
				sum+=in;
				sum+=t;
				tot++;
				
			}
			
			if(juicio == "incorrect"){
				in+=20;
				ant=id;
			}
			
			
			
			
		}
		
		cout<<tot<<" "<<sum<<'\n';
	}
	
	
	
	
}
