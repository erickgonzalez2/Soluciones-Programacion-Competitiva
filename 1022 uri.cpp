#include <iostream>

using namespace std;

int gdc(int u, int v){
	if(u<0)u*=-1;
	if(v<0)v*=-1;
	int aux;
		while(u>0){
		if(u<v){
			aux=u;u=v;v=aux;
		}
		u-=v;
	}
	return v;	
}


void obtenerResultado(int n1,int d1,int n2,int d2,char op){
	
	int nr,dr;
	
	switch(op){
		case '+':
			nr = n1*d2 + n2 * d1;
			dr = d1*d2;
			break;
		case '-':
			nr = n1*d2 - n2 * d1;
			dr = d1*d2;
			break;
		case '*':
			nr = n1*n2;
			dr = d1*d2;
			break;
		case '/':
			nr = n1*d2;
			dr = n2*d1; 
			break;					
	}
	
	int p;
	
	p = gdc(nr,dr);
	
	cout<<nr<<"/"<<dr<<" = "<<nr/p<<"/"<<dr/p<<'\n';	 
	
}


int main(){
	
	int t;
	
	cin>>t;
	
	string str;
	
	int n1,d1,n2,d2;
	int k;
	char op;
	char d;
	
	while(t--){
		
		k=0;
		cin>>n1;
		cin>>d;
		cin>>d1;
		cin>>op;
		cin>>n2,
		cin>>d;
		cin>>d2;
						
			obtenerResultado(n1,d1,n2,d2,op);						
	}			
}
