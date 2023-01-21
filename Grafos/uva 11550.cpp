#include <bits/stdc++.h>
using namespace std;

int matriz[100][100];
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;
	int n,m;
	int x;
	bool is_in;
	int ones;
	set <pair<int,int>>uniones;
	cin>>t;
	
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>x;
				matriz[i][j]=x;
			}
		}
		
		is_in=true;
		
		//checamos 1

		for(int i=0;i<m;i++){
			ones=0;
			for(int j=0;j<n;j++){
				if(matriz[j][i]==1){
					ones++;
				}
			}
			if(ones!=2){
					is_in=false;
					break;
				}
		}
		if(!is_in)cout<<"No\n";
		//checamos pares
		else{
		
			int x;
			int y;
			for(int i=0;i<m;i++){
				x=-1;
				for(int j=0;j<n;j++){
					if(matriz[j][i]){
						if(x==-1)x=j;
						else{
							y=j;
							break;
						}
					}
				}
				uniones.insert({x,y});
				
			}
			
			if(uniones.size()!=m)is_in=false;
			
			uniones.clear();
			
				
			if(is_in)cout<<"Yes\n";
			else cout<<"No\n";
			
        }	
		}
	}
	
	
