#include <iostream>
using namespace std;
int main(){
	
	int begin,l1,l2,l3;
	
	while(cin>>begin>>l1>>l2>>l3 && begin+l1+l2+l3!=0){
		
		int degrees=720;
		int x;
		//atras
		x=begin-l1;
		if(x<0){
			x+=40;
		}
		x = (x*360)/40;
		degrees+=x;
		
		degrees+=360;
		
		//adelante
		x=l2-l1;
		if(x<0){
			x+=40;
		}
		x= (x*360)/40;
		
		degrees+=x;
		
		//atras
		x=l2-l3;
		if(x<0){
			x+=40;
		}
		x= (x*360)/40;
		
		degrees+=x;
		cout<<degrees<<'\n';
		
	}
}
