#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	vector<int> arr(n,0);
	
	for(int i=0;i<n;i++){
		arr[i] = n-i;
	}
	
	
	
	
	auto t1 = chrono::high_resolution_clock::now();
	sort(arr.begin(),arr.end());
	auto t2 = chrono::high_resolution_clock::now();
	chrono::duration<double,milli>elapsed = t2-t1;
	
	cout<< elapsed.count() << "\n";	
	return 0;
}
