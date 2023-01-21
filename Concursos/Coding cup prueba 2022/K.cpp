#include <bits/stdc++.h>

using namespace std;

int main(){
	


	string str;
			
	

	cin>>str;

	int nivel = 0;
	int cnivel[5] = {0,0,0,0,0};
	int c[5] = {0,0,0,0,0};

	multiset <pair<char,pair<int,int>>>arbolA;
	multiset <pair<char,pair<int,int>>>arbolB;

		
			
	for(int i=0;i<str.size();i++){
		
		
		if(str[i]=='p'){
			nivel++;
		}
		
		if(str[i]=='b'){
			
			
			
			if(nivel==0)arbolA.insert({make_pair('b',make_pair(0,0))});
			
			
			else if(nivel == 1){
				c[nivel]= 
			}
			
		}
		
	}





}
