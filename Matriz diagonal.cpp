#include <iostream>
using namespace std;
int main(){
	int t,band=1;
	cin>>t;
	int matriz[t][t]={0};
	
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cin>>matriz[i][j];
		}
	}
	
	for(int i=0,j=0;i<t,j<t;i++,j++){
		if(i+1==t &&j+1==t) break;
		if(matriz[i][j]!=matriz[i+1][j+1]) band=0;
	}
	if(band==1)cout<<"SI";
	else cout<<"NO";
	return 0;
}
