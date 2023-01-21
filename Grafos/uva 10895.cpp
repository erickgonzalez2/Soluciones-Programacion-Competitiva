#include <bits/stdc++.h>
using namespace std;

int matriz[10000][10000];
int numeros[10000];
int elementos[10000];
int pos[10000];

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n,m;
	int ns,p,x;
	string str;
	while(cin>>n>>m){
		
		memset(matriz,0,sizeof(matriz));
		
		for(int i=0;i<n;i++){
			
			cin>>ns;
			
			if(ns!=0){
			
			for(int j=0;j<ns;j++){
				cin>>p;
				pos[j]=p-1;
			}
			for(int j=0;j<ns;j++){
				cin>>x;
				matriz[pos[j]][i]=x;
			}
			
		}
			else{
				cin.ignore();
				getline(cin,str);
			}
		}
		cout<<m<<" "<<n<<'\n';
		for(int i=0;i<m;i++){
			int ne=0;
			for(int j=0;j<n;j++){
				if(matriz[i][j]!=0){
					elementos[ne]=j+1;
					numeros[ne]=matriz[i][j];
					ne++;
				}
			}
			cout<<ne;
			
			for(int j=0;j<ne;j++){
				cout<<" "<<elementos[j];
			}
			cout<<'\n';
			
			if(ne!=0){
				cout<<numeros[0];
				for(int j=1;j<ne;j++)cout<<" "<<numeros[j];
			}
			cout<<'\n';
		}
	}
	
}

