#include <bits/stdc++.h>

using namespace std;

#define MAX 1000000

vector <long int> numbers;
vector<bool>prime;

void primeNumbers(){	
	   for (int p=2; p<=MAX; p++)
    {
        
        if (prime[p] == true)
        {
        	numbers.push_back(p);            
            for (int i=p*2; i<=MAX; i += p)
                prime[i] = false;
        }
    
}
}


int main(){
		
	prime.assign(1000000,1);
	primeNumbers();
		
	
	int t;
	long int a,b;
	
	long int low,high;
	
	cin>>t;
	
	while(t--){
		
		cin>>a>>b;
		
		low = lower_bound(numbers.begin(),numbers.end(),a)-numbers.begin();
		high = lower_bound(numbers.begin(),numbers.end(),b)-numbers.begin();
				
		if(binary_search(numbers.begin(), numbers.end(), b))high++;
		
		
		
		cout<<high-low<<'\n';
		
	}
	

	

	
}
