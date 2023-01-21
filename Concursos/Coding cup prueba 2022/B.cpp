#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<pair<int,string>> premios;

	int np;
	int globos = 0;
	int num;
	string p;
	pair<int,string>insert;
	
	
	cin>>np;
	
	premios.assign(np,pair<int,string>());
	
	for(int i=0;i<np;i++){
		
		cin>>num>>p;
		insert = make_pair(num,p);
		premios[i]=insert;
	}
	
	int n,m;
	
	cin>>n>>m;
	
	char matriz[n][m];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			
			cin>>matriz[i][j];				
		}
	}

	int casos;
	int c;
	char f;
	int fl;
	
	cin>>casos;
	
	for(int i=0;i<casos;i++){
		
		
		cin>>f>>c;
		fl= f-65;
		c-=1;
		
		if(matriz[fl][c]=='R'){
			matriz[fl][c]='.';
			globos++;
		}	
	}
	
	string win = "";
	
	for(int i = 0;i<premios.size();i++){
		
		if(globos == premios[i].first){
			win = premios[i].second;
			break;
		}		
	}
	
	cout<<"Fueron "<<globos<<" globo(s) rojos y ";
	
	if(win=="")cout<<"no gano premio.";
	else cout<<"gano premio "<<win<<".\n";

}

