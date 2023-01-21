#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int procs;
	string str;
	int contr;
	int cont;
	
	while(cin>>str){
		cin>>procs;
		
		contr=0;
		cont=0;
		
		for(int i=0;i<str.size();i++){
			
			if(str[i]=='R'){
				
				if(contr>=procs ||contr==0){
				cont++;
				contr=0;
				}
				
				contr++;
				
				
					
			}
			
			else if(str[i]=='W'){
				cont++;
				contr=0;
			}
			
			
			
			
		}
		cout<<cont<<'\n';
	}
	
	
	
	
	
}

