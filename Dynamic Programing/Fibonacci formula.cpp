#include<iostream> 
#include<cmath>

using namespace std; 

int fib(int n) { 
double phi = (1 + sqrt(5)) / 2; 
return round(pow(phi, n) / sqrt(5)); 
} 


int main () { 
	int n; 
	cin >> n;
	cout << fib(n) << '\n'; 
	return 0; 
} 


