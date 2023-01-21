#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int w,h,n;
	
	
	while(cin>>w>>h>>n && w && h &&n){
	
	bool matriz[h][w] ;
	
	int x1,x2,y1,y2;
	
	while(n--){
		
		
		cin>>x1>>y1>>x2>>y2;
		
		if(x1>x2)swap(x1,x2);
		
		if(y1>y2)swap(y1,y2);
		
		
		for(int i = y1-1 ; i<y2; i++){
			
			for(int j = x1-1;j<x2;j++ ){
				
				matriz[i][j]=true;
				
			}
			
		}
		
	}
		int count = 0;
		
		for(int i = 0 ; i< h ; i++){
			for(int j = 0 ; j< w ;j++){
				if(!matriz[i][j])count++;
			}
		}
		
		cout<<count<<'\n';
		
	}
	
	
	}
	
