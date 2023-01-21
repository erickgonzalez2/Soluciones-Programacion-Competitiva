#include <bits/stdc++.h>

using namespace std;

//Function to get the ith bit

int getIthBit(int n,int i){
	
	int mask = (1<<i);
	
	return (n&mask) > 0 ? 1 : 0;
	
}

int main(){
	
	int n ;
	int position;	
	int i;
	cin>>n>>i;
	
	cout<<getIthBit(n,i)<<'\n';
	
}
