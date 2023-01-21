#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int ph,mh;
	
	while(cin>>ph>>mh){
		
		int h,m;
		
		h = ph/30;
		m = mh/6;
		
		if(h<10)cout<<"0"<<h;
		
		else cout<<h;
		
		cout<<":";
		
		if(m<10)cout<<"0"<<m;
		else cout<<m;
		cout<<'\n';
		
	}
	
	
	
}
