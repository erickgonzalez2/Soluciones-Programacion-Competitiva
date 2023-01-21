#include <bits/stdc++.h>

using namespace std;

int main(){

int casos;
int a;
int f;
string str;

cin>>casos;



while(casos--){

	bool between = false;	
	
	getline(cin,str);
	cin.ignore();
	
	cin>>a;
	cin>>f;
	
	int p=1;
	int num = 0;
	bool dec = false;
	
	while(num!=f){
	
	num++;
	
	if(!between)between=true;
	
	else cout<<'\n';
	
	for(int i=0;i<(a*2)-1;i++){
				
		for(int j=0;j<p;j++){
			cout<<p;
		}
		if(casos-1==0 && num+1==f && i+1>=((a*2)-1))cout<<"holi";
		
		else cout<<'\n';
						
		
		if(!dec)p++;
		
		else p--;
		
		if(p>=a){
			dec=true;			
		}				
		
		
	}
	
	p=1;
	dec = false;
	}
	
}
    

}
