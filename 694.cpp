#include <iostream>

using namespace std;


int getC(int a,int limit){
	
	int n = 0;
	
	while(a>1 && a<=limit){						
			
			if(a&1)a = 3*a+1;									
			
			else a/=2;
			
			++n;
												
		}
		if(a==1)++n;
		
		return n;
				
}

int main(){
	
	int casos = 1;
	
	int a,limit;
	
	
	while(cin>>a>>limit , a!=-1){
		
		
		
		cout<<"Case "<<casos++<<": A = "<<a<<", limit = "<<limit<<", number of terms = "<<getC(a,limit)<<'\n';
		
		
		
	}					
	
	
}
