#include <bits/stdc++.h>

using namespace std;


	int factorial(int n){
		
		if(n==0)return 1;
		
		else {
			return factorial(n-1)*n;
		}
		
	}



int main(){
	
	cout<<"Ingrese un numero para saber cual es su factorial\n";
	int n;
	cin>>n;
	cout<<factorial(n);
	
	
}
