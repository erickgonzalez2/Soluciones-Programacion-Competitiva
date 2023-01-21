#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int h1,m1,h2,m2;
	
	while(cin>>h1>>m1>>h2>>m2 && h1+m1+h2+m2!=0){
		
		int cont=0;
		
		while(1){
			if(h1==h2 && m1==m2)break;
			cont++;
			m1++;
			if(m1==60){
				m1=0;
				h1++;
			}
			
			if(h1==24)h1=0;
		}
		cout<<cont<<'\n';
	}
	
}
