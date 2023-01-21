#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int x1,y1,x2,y2;
	while(cin>>x1>>y1>>x2>>y2 && x1 && x2 && y1 && y2){
		
		if(x1==x2 && y1==y2)cout<<"0\n";
		
		else if(x1==x2 || y1==y2)cout<<"1\n";
		
		else{
			
			bool enc=false;
			
			int x3,y3;
			x3 = x1;
			y3 = y1;
			
			for(int i=0;i<8;i++){
				x3++;
				y3--;
				if(x3==x2 && y3==y2){
					cout<<"1\n";
					enc=true;
				}
				if(x3>8 || y3<=0)break;
			}
			
			if(!enc){
				x3 = x1;
				y3 = y1;
				for(int i=0;i<8;i++){
				x3--;
				y3--;
				if(x3==x2 && y3==y2){
					cout<<"1\n";
					enc=true;
				}
				if(x3<=0 || y3<=0)break;
			}
			}
			
			if(!enc){
				x3 = x1;
				y3 = y1;
				for(int i=0;i<8;i++){
				x3--;
				y3++;
				if(x3==x2 && y3==y2){
					cout<<"1\n";
					enc=true;
				}
				if(x3<=0 || y3>8)break;
			}
			}
			
			if(!enc){
				x3 = x1;
				y3 = y1;
				for(int i=0;i<8;i++){
				x3++;
				y3++;
				if(x3==x2 && y3==y2){
					cout<<"1\n";
					enc=true;
				}
				if(x3>8 || y3>8)break;
			}
			}
			if(!enc)cout<<"2\n";
		}		
	
	}
	
}
