#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	
	vector <int>nums;
	int x;
	
	for(int i=0;i<n;i++){
		cin>>x;
		nums.push_back(x);
		}
	
	priority_queue<int, vector<int>, greater<int> > pq (nums.begin(),nums.end());
		
	int cost = 0;
	
	int a,b,sum;
	
	if(pq.size()==1)cout<<pq.top()<<'\n';
	
	else{
		
	
	
	while(pq.size()!=1){
		
			a = pq.top();
			pq.pop();
			b = pq.top();
			pq.pop();
			
			cost+=a;
			cost+=b;
			sum = a+b;
			pq.push(sum);			
	}
	cout<<cost<<'\n';
}
}
