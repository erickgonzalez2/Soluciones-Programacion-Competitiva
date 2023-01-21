#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int casos;
	
	cin>>casos;
	
	while(casos--){
		
		int a,b;
		int x,y;
		int c;
		int conteo = 0;
		
		string str;
		string aux;
		
		cin>>a>>b;
		
		x = a;
		
		while(x!=b){
			
			str = "";
			aux = "";
			
			if(x+1==b){
				conteo++;
				x++;
			}
			
			else {
			
			str = to_string(x);
			
			for(int i=str.size()-1;i>=0;i--){
				aux+= str[i];
			}
			
			stringstream iss(aux);
			iss>>a;
			
			if(a==b){
				conteo++;
				x=a;
			}
			
			else{
			
			y = x+1;
				
			str = "";
			aux = "";
			
			str = to_string(y);
			
			for(int i=str.size()-1;i>=0;i--){
				aux+= str[i];
			}
			
			stringstream isr (aux);
			isr>>c;
			
			if(c>a){
				
				x++;
				conteo++;
				
			}
			
			else{
				
				x=a;
				conteo++;
				
			}
			
				
				
				
			}
			
				
			}
				
		}
		
		cout<<conteo<<'\n';
		
	}
	
}
