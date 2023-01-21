#include <bits/stdc++.h>
using namespace std;

int llam = 0;

int fib(int n){
	
	llam++;
	
	if(n==0)return 0;
	else if(n==1)return n;
	
	return fib(n-1)+fib(n-2);
	
	
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int c,n;
	cin>>c;
	
	while(c--){
	llam = 0;
	cin>>n;
	cout<<"fib("<<n<<") = "<<llam-1<<" calls = "<<fib(n)<<'\n';
	}
}
