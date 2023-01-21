#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	
	int cuenta,n;
	
	cin>>cuenta>>n;
	
	
	for(int i=0;i<n;i++){
		
		switch(cuenta){
			
			case 'R':
				cuenta = 'A';
				break;
				
				
			case 'A':
				cuenta = 'V';
				break;
				
			case 'V':
				cuenta = 'R';
				break;
			
			
			
		}
		
	
		
		
		
	}
	
	cout<<cuenta<<'\n';
	
	
}
