#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	int n;
	
	cin>>n;
	
	while(n--){
		
		list <int> numbers;
		
		int nc,k;
		
		cin>>nc>>k;
		
		for(int i=1;i<=nc;i++){
			
			numbers.push_back(i);
		
		}
		
		auto it =  numbers.begin();
		
		while(numbers.size()!=1){
			
			for(int i = 1;i<k;i++){
			
			if(it==numbers.end())it++;
			it++;
			
			}
		
			numbers.remove(*it);
			it++;
			
		}
		
		
		cout<<numbers.front()<<'\n';
	}

}
