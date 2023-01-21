#include <bits/stdc++.h>

using namespace std;

vector <bool> criba(100001,true);
vector <int> numeros_primos;

void precalculo(){
	     	
	criba[0] = criba[1] = false;
	for (long long i = 2; i <= 100001; i++) {
		
	    if (criba[i] && (long long )i * i <= 100001) {
	        for (long long  j = i * i; j <= 100001; j += i)
	            criba[j] = false;
	    }
	}
	
	for(long long i = 2; i<100001;i++){
		
		if(criba[i])numeros_primos.push_back(i);
	}				
}


int main(){
	
	
	precalculo();
	int t;
	
	cin>>t;
	
	while(t--){
		
		long long N;
		long long x;
		
		vector <long long > numeros_analizados;
		
		cin>>N;
		
	
		
		for(int i = 0;i<N;i++){		
			cout<<numeros_primos[i]<<'\n';
		}
		
		
		
		
		
			
	
	
}
	
	
}
