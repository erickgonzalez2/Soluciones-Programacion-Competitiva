#include <bits/stdc++.h>

using namespace std;

//Function to clear last ith bits

int clearLastBits(int n,int i){
	int mask = (-1<<i);
	
	return n&mask;
	
	
}


int main(){
	
	int n,i;
	
	cin>>n>>i;
	
	cout<<clearLastBits(n,i)<<'\n';
	
	
	
	
	
}
