#include <bits/stdc++.h>

using namespace std;


int main(){
	
	vector <int> candies = {1,1,2,2,3,3,3,3,4,4};		
	
	map<int,int> mapCandie;
	
	
	for(auto it:candies){
		
		if(mapCandie.count(it)==0){
			mapCandie[it]=1;
		}
		else{
			mapCandie[it]++;
		}		
	}
	
	int n = candies.size();
	
	int constraint = n/2;
	
	if(mapCandie.size()<=constraint)cout<<mapCandie.size();
	
	else{
		cout<<constraint<<'\n';
	}
	
	
}
