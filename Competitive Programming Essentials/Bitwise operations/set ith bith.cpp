#include <bits/stdc++.h>

using namespace std;

//Function to clear the ith bit

int setIthBit(int n,int i){
	
	int mask = (1<<i);
	n = (n|mask);
	
	return n ;
	
}

int main(){
	
	int n ;
	int position;	
	int i;
	cin>>n>>i;
	
	cout<<setIthBit(n,i)<<'\n';
	
}
