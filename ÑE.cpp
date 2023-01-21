#include <iostream>
using namespace std;
int main(){
	int n,c=0,i,j;
	cin>>n;
	int matriz[n][n]={0};
	for(i=0;i<n;i++){
		for( j=0;j<n;j++){
			cin>>matriz[i][j];
			}
		}
	
	
	for(i=0;i<n;i++){
		for( j=0;j<n;j++){
			if(matriz[i][j]==matriz[j][i])c++;
			}
		}	
		if(c==n*n)cout<<"SI";
		else cout<<"NO";
return 0;
}
