#include <bits/stdc++.h>

using namespace std;

int matrizA[1000][1000];
int matrizB[1000][1000];

int RI,CI,RF,CF;

int main(){
	
	int tx1,ty1,tx2,ty2,tx3,ty3,tx4,ty4;					
	int t2x1,t2y1,t2x2,t2y2,t2x3,t2y3,t2x4,t2y4;
	
	vector<int>valoresxA= {tx1,tx2,tx3,tx4};		
	vector<int>valoresyA= {ty1,ty2,ty3,ty4};		
	vector<int>valoresxB= {t2x1,t2x2,t2x3,t2x4};
	vector<int>valoresyB= {t2y1,t2y2,t2y3,t2y4};
	
	
	
	cin>>tx1>>ty1>>tx2>>ty2>>tx3>>ty3>>tx4>>ty4;
		
	cin>>t2x1>>t2y1>>t2x2>>t2y2>>t2x3>>t2y3>>t2x4>>t2y4;
	
	
	
	memset(matrizA,0,sizeof(matrizA));
	memset(matrizB,0,sizeof(matrizB));
	
	matrizA[tx1][ty1]=1;
	matrizA[tx2][ty2]=1;
	matrizA[tx3][ty3]=1;
	matrizA[tx4][ty4]=1;
	
	matrizB[t2x1][t2y1]=1;
	matrizB[t2x2][t2y2]=1;
	matrizB[t2x3][t2y3]=1;
	matrizB[t2x4][t2y4]=1;
	
	
	sort(valoresxA,valoresxA.begin);
	
	//arriba sean los mayores
	
	
	
}
