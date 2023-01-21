///Problema C Gran Premio de Mexico 2021

#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long int n) 
{ 
	// Corner case 
	if (n <= 1) 
		return false; 

	// Check from 2 to n-1 
	for (int i = 2; i < n; i++) 
		if (n % i == 0) 
			return false; 

	return true; 
} 
// Function to print primes 
void printPrime(long long int a,long long int b) 
{ 
	int acum=0;
	for (long long int i = a; i <= b; i++) { 
		if (isPrime(i)) acum++;
			
	} 
	
	cout<<acum<<'\n';
}




int main(){
	
	
	ios_base::sync_with_stdio(false);cin.tie(0);
	long long int c;
	
	long long int i,j;
	
	cin>>c;
	
	while(c--){
		
	cin>>i>>j;
			
	printPrime(i,j);			
		
		
	}
	
	
	
	
}
