#include <bits/stdc++.h>
using namespace std;
bool enc;
bool isPrime(int n) 
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
void printPrime(int n,int m) 
{ 
	
	for (int i = 2; i <= m; i++) { 
		if (isPrime(i)) {
		if(n%i==0 && m%i==0){
			cout<<n/i<<" / "<<m/i<<'\n';
			enc=true;
		}		
	}		
	} 
} 


int main(){
	
	string str;
	string word;
	string final;
	set<string>words;
	int nwords=0;
	int ngames=0;
	bool is_valid;
	
	while(getline(cin,str) && str!="#"){
				ngames++;
				for(int i=0;i<str.size();i++){
					if(isalpha(str[i]))word+= tolower(str[i]);
					else word+=" ";
				}
				
				is_valid=false;
				istringstream iss(word);
				
				while(iss>>final){
					if(final=="bullshit")is_valid=true;
					else words.insert(final);
				}
				
				if(is_valid)nwords+=words.size();
				else ngames--;
				words.clear();
				word.clear();
		}
		enc=false;
		printPrime(nwords,ngames); 
		if(!enc)cout<<nwords<<" / "<<ngames<<'\n';	
	
}

