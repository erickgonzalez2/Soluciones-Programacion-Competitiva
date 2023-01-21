#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll acum;





ll multDigits(ll x){
	acum++;
	ll sum=1;
	
	while(x){
		sum*= (x%10);
		x/=10;
	}
	
	if(sum>9)return multDigits(sum);
	
	else return 0;
	
}



int main(){
	
	
	int t;
	ll n;
	
	cin>>t;
	
	while(t--){
		
		acum=0;
		cin>>n;
		if(n>9){
			multDigits(n);
			cout<<acum<<'\n';
		}
		else cout<<"0\n";
		
		
	}
	
	
	
	
	
	
	
}
