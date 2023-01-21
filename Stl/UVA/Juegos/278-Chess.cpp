#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	char ficha;
	int f,c;
	
	cin>>n;
	while(n--){
		cin>>ficha>>f>>c;
		int aux;
		int total;
		bool fila_c=false;
		switch(ficha){
			
		case 'r':
			cout<<f<<'\n';
			break;
		
		
		case 'k':
			if((f*c)%2!=0){
			aux=(f*c)/2;
			aux+=1;
			}
			else aux= (f*c/2);
			cout<<aux<<'\n';
			break;
		
		
		case 'K':
			total=f*c;
			aux = c/2;
			if(f%2==0){
				for(int i=0;i<f;i++){
					if(!fila_c){
						total-=c;
						fila_c=true;
					}
					else{
						total-=aux;
						fila_c=false;
					}
				}
			}
			else{
			fila_c=true;
				for(int i=0;i<f;i++){
					if(!fila_c){
						total-=c;
						fila_c=true;
					}
					else{
						total-=aux;
						fila_c=false;
					}
				}
				
			}
			cout<<total<<'\n';
			break;
			
			case 'Q':
				cout<<min(f,c)<<'\n';
				break;
				
		}
	}
}
