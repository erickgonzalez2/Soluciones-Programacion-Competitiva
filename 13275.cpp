#include <bits/stdc++.h>

using namespace std;

bool isLeapYear(int year){
	
	if(year % 400 == 0)return true;
	else if(year % 100 == 0)return false;
	else if(year % 4 == 0)return true;
	else return false;
}



int main(){
	
	int casos;
	int count = 1;
	
	cin>>casos;
	
	while(casos--){
		
		int d,m,ai,af;
		
		cin>>d>>m>>ai>>af;
		
		cout<<"Case "<<count<<": ";
		
	
		
		if(m==2 && d==29){
			int nyear=ai+4;
			int leaps = 0;
			
			
			while(nyear<=af){
				if(isLeapYear(nyear))leaps++;
				nyear+=4;
			}
			
			cout<<leaps<<'\n';
		}
		
		
			else{
			cout<<af-ai<<'\n';
		}
		
	count++;	
	}
}
