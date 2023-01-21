#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);
	
	
	int ci;
	int fi;
	
	int cf;
	int ff;
	
	
	
	int f1,c1,f2,c2;
	
	while(cin>>f1>>c1>>f2>>c2 && f1 && c1 && f2 && c2){
		
		int cont = 0;
		
		if(f1>f2){
			fi = f2;
			ci = c2;
			ff = f1;
			cf = c1;		
		}
		else if(f2>f1){
			fi = f1;
			ci = c1;
			ff = f2;
			cf = c2;
		}
		
		else if(f1==f2){
			c2>c1?cout<<(c2-c1)<<'\n':cout<<(c1-c2)<<'\n';
		}
		
		 
		
		while(fi!=ff){
			
			
			//arriba impar abajo par
			if(fi%2==1 && (fi+1)%2==0){
				
				//conexion impar
				if(ci%2==1){
					fi++;					
				}
				
				
				//no hay conexion impar
				else{
					
					if(cf>=ci){
						ci++;
					}
					
					else{
						ci--;
					}
					
					
				}
				
			}
			
			//arriba par abajo impar
			else if(fi%2==0 && (fi+1)%2==1){
				
				//conexion par
				if(ci%2==0){
					fi++;
				}
				
				//no hay conexion par
				else{
						if(cf>=ci){
						ci++;
					}
					
					else{
						ci--;
					}
					
				}
				
			}
		
		cont++;	
		}
		
		cf>ci?cont+=(cf-ci):cont+=(ci-cf);
		
		cout<<cont<<'\n';
	}
}
