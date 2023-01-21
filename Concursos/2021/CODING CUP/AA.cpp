#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	int f,c;
	int fi,ci;
	
	string bot,user;
	
	cin>>f>>c;
	
	cin>>fi>>ci;
	
	cin>>bot>>user;
	
	
	int x,y;
	
	string fuser="";
	
	x=fi;
	y=ci;
	
	for(int i=0;i<bot.size();i++){
		
		switch(bot[i]){
			
			case 'U':
				x--;
				if(x<=0){
					cout<<"ERROR\n";
					return 0;
				}
			break;
			
			
			case 'D':
				x++;
				if(x>f){
					cout<<"ERROR\n";
					return 0;
				}
				break;
				
			case 'L':
				y--;
				if(y<=0){
					cout<<"ERROR\n";
					return 0;
				}
				
				break;
			
			case 'R':
				y++;
				if(y>c){
					cout<<"ERROR\n";
					return 0;
				}
				break;
				
			case 'X':
			break;
		}
		
			
	}
	
	
	for(int i=0;i<user.size();i++){
		
		if(user[i]!='Z')fuser+=user[i];
		
		else{
			
			if(fuser.empty()){
				cout<<"ERROR\n";
				return 0;
			}
			
			else{
				fuser.pop_back();
			}
			
		}
		
		
	}
	
	int x2=fi,y2=ci;
	
	
	for(int i=0;i<fuser.size();i++){
		switch(fuser[i]){
			
			case 'U':
				x2--;
				if(x2<=0){
					cout<<"ERROR\n";
					return 0;
				}
			break;
			
			
			case 'D':
				x2++;
				if(x2>f){
					cout<<"ERROR\n";
					return 0;
				}
				break;
				
			case 'L':
				y2--;
				if(y2<=0){
					cout<<"ERROR\n";
					return 0;
				}
				
				break;
			
			case 'R':
				y2++;
				if(y2>c){
					cout<<"ERROR\n";
					return 0;
				}
				break;
				
			case 'X':
			break;
		}
	}
	
	
	if(x==x2 && y==y2)cout<<"WIN\n";
	
	else cout<<"LOST\n";
}

