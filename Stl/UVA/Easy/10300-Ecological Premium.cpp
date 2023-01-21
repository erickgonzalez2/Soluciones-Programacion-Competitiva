#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int cases,farmers;
	int a,b,c;
	cin>>cases;
	
	while(cases--){
		int sum=0;
		cin>>farmers;
		while(farmers--){
			cin>>a>>b>>c;
			sum+= (a*c);
		}
		cout<<sum<<'\n';
	}
}
