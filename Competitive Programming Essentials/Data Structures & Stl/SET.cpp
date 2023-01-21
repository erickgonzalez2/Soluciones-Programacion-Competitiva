#include <bits/stdc++.h>

using namespace std;

int main(){
	
	set <pair<int,pair<int,int>>> numbers;
	
	numbers.insert({make_pair(1,make_pair(1,1))});
	numbers.insert({make_pair(1,make_pair(1,2))});
	numbers.insert({make_pair(1,make_pair(2,1))});
	numbers.insert({make_pair(1,make_pair(1,3))});
	numbers.insert({make_pair(1,make_pair(1,4))});
	numbers.insert({make_pair(1,make_pair(1,5))});
	numbers.insert({make_pair(1,make_pair(1,6))});
	numbers.insert({make_pair(1,make_pair(0,7))});
	numbers.insert({make_pair(1,make_pair(2,3))});
	
	
	for(auto it:numbers){
		cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<'\n';
	}
	
}
