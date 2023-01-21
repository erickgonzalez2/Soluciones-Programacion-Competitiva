#include <bits/stdc++.h>

using namespace std;
	
	int n;
	int p = 0;
	int c = 0;	
	bool yap = false;

void recursiva2(int r[],int m[]){
	
	if(p>=n-1)return;
	
	if(r[p+1]<r[p]){
		c++;
		
	}
	p++;
	recursiva2(r,m);
	
	
	
}

void recursiva(int r[],int m[]){
	
	if(p>=n-1)return;
	
	if(yap)return;	
	
	
	if(r[p+1]>m[p]){
		
		c++;
		yap = true;
		p++;
		recursiva2(r,m);
		
	}
	
	else {
		
		p++;
		recursiva(r,m) ;
	}
	
}




int main(){
		
	cin.tie(nullptr);
  	ios_base::sync_with_stdio(false);	
	
	cin>>n;
	
	int r[n];
	int m[n];

	
	for(int i=0;i<n;i++){
		
		cin>>m[i];		
	}
	
	for(int i=0;i<n;i++){
		
		cin>>r[i];		
	}
	
	recursiva(r,m);
	
	cout<<c<<'\n';
	
}
