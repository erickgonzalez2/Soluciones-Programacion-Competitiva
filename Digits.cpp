#include <bits/stdc++.h>
using namespace std;
int main(){
	
	string a;
	char b[1];
	int min;
	int xi;
	int x;
	while(cin>>a && a!="END"){
		
		for(int i=0;i<a.length();i++){
			b[0] = a[i];
			x = atoi(b);
			xi = x+i-1;
			if(xi==x-1){
				if(i==0)min=xi;
				else if(xi<min)min=xi;
			}
		}
		if(a=="1")cout<<"1\n";
		else cout<<min<<'\n';
		
		xi=0;
	}
	
	
	
	
}
