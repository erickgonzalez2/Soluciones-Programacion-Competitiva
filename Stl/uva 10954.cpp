#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n,x;
	long int sum=0;

	cin>>n;
	while(n!=0){
		
		priority_queue <int, vector <int>, greater <int>> numbers;
		
		while(n--){
			cin>>x;
			numbers.push(x);
		}
		
		int total = 0, cost = 0;
		
		while(numbers.size()>1){
			total = numbers.top();
			numbers.pop();
			total += numbers.top();
			numbers.pop();
			cost += total;
			numbers.push(total);
		}
		
		cout<<cost<<'\n';
		cin>>n;
	}
}
