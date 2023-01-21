#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	int np1;
	int np2;
	int np3;
	int x;
	
	cin>>n;
	while(n--){
		
		set <int>numbers;
		set<int>f1;
		set<int>f2;
		set<int>f3;
		
		int count1=0;
		int count2=0;
		int count3=0;
		
		cin>>np1;
		for(int i=0;i<np1;i++){
			cin>>x;
			f1.insert(x);
			numbers.insert(x);
		}		
		
		cin>>np2;
		for(int i=0;i<np2;i++){
			cin>>x;
			f2.insert(x);
			numbers.insert(x);
		}
		
		cin>>np3;
		for(int i=0;i<np3;i++){
			cin>>x;
			f3.insert(x);
			numbers.insert(x);
		}
		
		
		for(auto it=numbers.begin();it!=numbers.end();it++){
			
			auto itr= f1.find(*it);
			if(itr!=f1.end())count1++;
			
			auto itr2= f2.find(*it);
			if(itr2!=f2.end())count2++;
			
			auto itr3= f3.find(*it);
			if(itr3!=f3.end())count3++;
		}
		
		if(count1==1&&count2==1&&count3==1){
			
		}
		
		
		
		
		
	}
	
	
	
	
}
