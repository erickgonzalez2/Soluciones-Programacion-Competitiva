#include <bits/stdc++.h>

using namespace std;

//Function to clear the ith bit

int clearIthBit(int n,int i){
	
	int mask = ~(1<<i);
	
	return (n&mask) ;
	
}

int main(){
	
	int n ;
	int position;	
	int i;
	cin>>n>>i;
	
	cout<<clearIthBit(n,i)<<'\n';
	
}
