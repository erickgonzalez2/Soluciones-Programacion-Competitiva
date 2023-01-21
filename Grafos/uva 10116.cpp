#include <bits/stdc++.h>
using namespace std;

char matriz[10][10];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n,m,inicio;
	char in;
	int recorrido[10][10];
	int steps;
	int loop_steps;
	bool salida;
	bool loop;
	
	while(cin>>n>>m>>inicio && n && m && inicio){
		salida=false;
		loop=false;
		loop_steps=0;
		steps=0;
		memset(recorrido,0,sizeof recorrido);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>matriz[i][j];
			}
		}
		
		int x=0,y=inicio-1;
		int xl,yl;
		
		 recorrido[x][y]=1;
		while(!salida){
			
			switch(matriz[x][y]){
				
				case 'S':
					x++;
					if(x<n){						
						if(recorrido[x][y]!=1){
							recorrido[x][y]=1;
							steps++;
						}
						else{
							salida=true;
							loop=true;
							xl=x;
							yl=y;
						} 
					}
					else {
						steps++;
						salida=true;
					}
					break;
				//
				
				
				case 'N':
					x--;
					if(x>=0){
						if(recorrido[x][y]!=1){
						recorrido[x][y]=1;
						steps++;
					}
					else{
						salida=true;
						loop=true;
						xl=x;
						yl=y;
					}
				}
					else{
						steps++;
						salida=true;
					}
					break;
				
				//
				case 'W':
					y--;
					if(y>=0){
						if(recorrido[x][y]!=1){
						recorrido[x][y]=1;
						steps++;
					}	
						else{
							salida=true;
							loop=true;
							xl=x;
							yl=y;
						}
					}
					else {
						steps++;
						salida=true;
					}
					break;
				
				//
				
				case 'E':
					y++;
					if(y<m){
						if(recorrido[x][y]!=1){
							recorrido[x][y]=1;
							steps++;
						}
						else{
							salida=true;
							loop=true;
							xl=x;
							yl=y;
						}
					}
					else {
						steps++;
						salida=true;
					}
					
					break;
			}
			
		}
		if(!loop)cout<<steps<<" step(s) to exit\n";
		else{
			steps++;
			x=0,y=inicio-1;
			loop=false;
			if(xl==0 && yl==inicio-1)cout<<"0 step(s) before a loop of "<<steps<<" step(s)\n";
			else{
			while(!loop){
				switch(matriz[x][y]){
					
					case 'S':
						x++;
						if(x==xl && y==yl){
							loop_steps++;
							loop=true;
						}
						else loop_steps++;
						break;
					
					case 'N':
						x--;
						if(x==xl && y==yl){
							loop_steps++;
							loop=true;
						}
						else loop_steps++;
						break;
						
						case 'W':
						y--;
						if(x==xl && y==yl){
							loop_steps++;
							loop=true;
						}
						else loop_steps++;
						break;
						
						case 'E':
						y++;
						if(x==xl && y==yl){
							loop_steps++;
							loop=true;
						}
						else loop_steps++;
						break;
				}
			}
			
			cout<<loop_steps<<" step(s) before a loop of "<<steps-loop_steps<<" step(s)\n";
		}
		}
		
	
		}
	}
