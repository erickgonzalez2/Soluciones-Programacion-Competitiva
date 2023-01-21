#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main(){
	char c[100] ;
	int g,n,numl,cg=0,ci;
	cin>>g;
	while(g!=0){
	cg=0;
	string sub[g];
	cin>>c;
	n= strlen(c);
	numl=n/g;
	char cd[numl];
	for(int i=0;i<g;i++){
		for(int j=cg;j<n;j++){
			cd[ci]= c[cg];
			ci++;
			cg++;
			if(cg!=0){
				if(cg%numl==0)break;
			}
		}
		sub[i]=cd;
		ci=0;
	}
	for(int k=0;k<g;k++){
		cout<<sub[k]<<" ";
	}
	cin>>g;
	}
	
}



