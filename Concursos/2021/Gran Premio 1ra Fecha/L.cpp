#include <bits/stdc++.h>

using namespace std;

vector<string> expresion;
string final;	


void getExpresion(long int pos){
	
	
	for(long int i=0;i<expresion[pos].size();i++){
		
		if(expresion[pos][i]!='x'){
			final+=expresion[pos][i];
		}
		else getExpresion(pos+1);
		
	}
	
}


int main(){
	
	long int k;
	
	string str = "";
	
	int t;
	
	cin>>t;
		
	
	while(t--){
	
	cin>>k;
	expresion.clear();	
	final = "";
	
	while(k!=0){					
		
		str = "";				
		
		if(k==1){
			str+="2";
			expresion.push_back(str);
			k--;
		}
		
		else if(k&1){ //impar
			k--;
			str+= "(2*x)";	
			expresion.push_back(str);					
		}
		else{ //par
			k = k/2;
			str+="(x)^2";
			expresion.push_back(str);
		}				
	}
	
	getExpresion(0);
	
	cout<<final<<'\n';
	
	}
	
	
	
}
