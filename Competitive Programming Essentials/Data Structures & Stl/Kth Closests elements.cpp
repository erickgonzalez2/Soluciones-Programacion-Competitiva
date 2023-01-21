#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector <int> arr;
	
	int k, x;
	
	int n,num;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>num;
		arr.push_back(num);
	}
	
	sort(arr.begin(),arr.end());
			
	cin>>k>>x;
	
	auto index = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
			
	vector<int>numbers;
	
	numbers.push_back(arr[index]);
	int con = k;
	k--;
	
	int high = index,low = index ;
	int t = arr.size();
	
	high++;
	low--;
	
	while(k>=0){				
		
		if(low>=0){
			numbers.push_back(arr[low]);
			low--;
			k--;
		}				
		if(high<=t-1 && k>0){
			numbers.push_back(arr[high]);
			high++;
			k--;
		}	
	}	
	sort(numbers.begin(),numbers.end());
	
	for(auto it:numbers){
		cout<<it<<'\n';
	}
			
}
