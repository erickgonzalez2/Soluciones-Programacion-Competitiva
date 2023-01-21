#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	long long int n,m;
	long long int x;
	
	cin>>n>>m;
	while(n!=0&&m!=0){
		
		set <long long int> num;
		long long int count=0;

		while(n--){
			cin>>x;
			num.insert(x);
		}
		while(m--){
			cin>>x;
			auto it= num.find(x);
			if(it!=num.end())count++;
		}
		cout<<count<<'\n';
		cin>>n>>m;
	}
}
