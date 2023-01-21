#include<bits/stdc++.h>
using namespace std;
int lowerCase(string s){
	bool low = false;
	
	for(int i=0;i<s.size();i++){
		if(islower(s[i]))low = true;
	
	if(low)break;	
}
	if(low)return 1;
	else return 0;
}
int upperCase(string s){
	bool up = false;
	
	for(int i=0;i<s.size();i++){
		if(isupper(s[i]))up=true;
		
		if(up)break;
	}
	
	if(up)return 1;
	else return 0;
}
int digitCase(string s){
	
	bool dig=false;
	bool havedig = false;
	
	for(int i = 0;i<s.size();i++){
		if(isdigit(s[i])){
			havedig=true;
			break;
		}
	}
	
	
	for(int i = 1;i<s.size()-1;i++){
		
		if(isdigit(s[i])){
			if(isdigit(s[i-1])){
				int x = s[i]-48;
				int y = s[i-1]-48;
				
				if(x>y){
					if(x-y==1){
						dig=true;
					}
				}
				else if(y>x){
					if(y-x==1)dig=true;
				}
			}
			
			if(isdigit(s[i+1])){
				int x = s[i]-48;
				int y = s[i+1]-48;
				
				if(x>y){
					if(x-y==1){
						dig=true;
					}
				}
				else if(y>x){
					if(y-x==1)dig=true;
				}
			}
		
	}
		if(dig)break;
	}
	
	if(havedig){
		if(!dig){
			return 1;
		}
		else return 0;
	}
	else return 0;
}

int caracterCase(string s){
	bool car = false;
	
	for(int i = 0;i <s.size();i++){
		
		if(!isalpha(s[i]) && !isdigit(s[i])){
		if(s[i]=='.'||s[i]=='#'|| s[i]=='$' || s[i]=='%'|| s[i]=='/'||s[i]=='('||s[i]=='&'||s[i]==')'){
			car=true;
		}
		else{
			car=false;
			break;
		}
	}
		
	}
	if(car)return 1;
	else return 0;
	
	
}
int main(){
	int t;
	int cases = 1;
	cin>>t;
	while(t--){
		int acum = 0;
		string s;
		cin>>s;
		acum+=lowerCase(s);
		acum+=upperCase(s);
		acum+=digitCase(s);
		if(s.size()>=10)acum++;
		acum+=caracterCase(s);
		
		if(acum==5)cout<<"Assertion number #"<<cases<<": Strong\n";
		else if(acum==4)cout<<"Assertion number #"<<cases<<": Good\n";
		else if(acum==3)cout<<"Assertion number #"<<cases<<": Weak\n";
		else cout<<"Assertion number #"<<cases<<": Rejected\n";
		
		cases++;
		
		
	}
	return 0;
}
