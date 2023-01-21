#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c,x;
	
	cin>>a>>b>>c;
	int p = 0;
	
	while((a && b ) || ( a&& c ) || ( b&& c )  ){						
		
		if(a >= b && a >= c){ // a es el mayor
						
			if(c<=b && c > 0){ 				
				a--;
				c--;
				p++;				
			}
			else if(b>0){ 
				a--;
				b--;
				p++;
			}
			else{
				a--;
				c--;
				p++;
				
			}
		}
				
		else if(b >= c && b >=a){ // b es el mayor
			
			if(c<= a && c>0){ 
				b--;
				c--;
				p++;
			}
			else if(a>0){
				b--;
				a--;
				p++;
			}
			else{
				b--;
				c--;
				p++;
				
			}
			
		}
		else if (c >=a && c>=b){ // c es el mayor
			
			if(a<=b && a>0){//a
				c--;
				a--;
				p++;
			}
			else if(b>0){
				c--;
				b--;
				p++;
			}
			else{
				c--;
				a--;
				p++;				
			}			
		 }
		 
		 if(a<=0 && b<=0 && c<=0)break;
		 				
	}
		cout<<p<<'\n';					
	}
