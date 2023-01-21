#include <bits/stdc++.h>

using namespace std;


vector<bool> uniq;

void onlyOne(char x,string s1){
	
	for(int i=0;i<s1.size();i++){
		
		if(s1[i]==x)uniq[i]=true;
		
	}
	
	
}

int countChar(string s0,char x){
	
	int n = 0;
	
	for(int i=0;i<s0.size();i++){
		if(s0[i]==x){
			n++;			
		}		
	}
	return n;
}

int main(){
	
	int round;
	
	string s0;
	string s1;
	int count;
	int x;
	int e;
	
	
	
	while(cin>>round && round!=-1){
		
		e=0;
		count=0;
		cin>>s0;
		cin>>s1;
	
		
		
		uniq.assign(s1.size(),0);
		
		for(int i=0;i<s1.size();i++){
			
			if(!uniq[i]){
			
			x = countChar(s0,s1[i]);
			onlyOne(s1[i],s1);
			
			if(x>0)count+=x;
	 		else e++;	 		
	 		 		
	 		if(e>=7 || count>=s0.size())break;
	 		}
		}
		
		cout<<"Round "<<round<<'\n';
		
		if(e==7)cout<<"You lose.\n";
		
		else if(count>=s0.size())cout<<"You win.\n";
		
		else cout<<"You chickened out.\n";
		
		
		
		
		
	}
	
	
	
	
	
	
}
