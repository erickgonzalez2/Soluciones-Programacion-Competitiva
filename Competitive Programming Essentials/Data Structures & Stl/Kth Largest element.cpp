#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> nums = {3,2,3,1,2,4,5,5,6};
	int k;	
	
	multiset<int>elements(nums.begin(),nums.end());
	
	auto it = elements.end();
	it--;
	cin>>k;
	
	for(int i=0;i<k-1;i++){
		it--;
	}
	cout<<*it<<'\n';
}
