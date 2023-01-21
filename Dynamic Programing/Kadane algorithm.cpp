// kadane algorithm

#include <bits/stdc++.h>

using namespace std;


int max_sum(int arr[],int n){
	
	int max_so_far = INT_MIN;
	int max_here = 0;
	
	for(int i=0;i<n;i++){
		
		max_here = max_here + arr[i];
		
		if(max_so_far<max_here){
			max_so_far = max_here;
		}
		
		if(max_here<0)max_here = 0;
		
	}
	
	return max_so_far;
}




int main(){
	
	int n;
	
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int res = max_sum(arr,n);
	
	cout<<res<<'\n';
	
}
