#include <bits/stdc++.h>
using namespace std;
int main(){
	
	long long sum;
	multiset <long>numbers;
	ios_base::sync_with_stdio(false);
	int n;
	long k;
	long num;
	
	cin>>n;
	while(n!=0){
		
		while(n--){	
		
		cin>>k;
		while(k--){
			cin>>num;
			numbers.insert(num);	
		}
		
		multiset <long> ::iterator it= --numbers.end();
		multiset <long> ::iterator itr= numbers.begin();
		sum+=*it-*itr;
		numbers.erase(it);
		numbers.erase(itr);
			
	}
		
	cout<<sum<<'\n';
	sum=0;
	numbers.clear();
	cin>>n;
	
	}
}
