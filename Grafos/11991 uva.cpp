#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int k,v;
	int x;
	vector <vector <int> > numbers;
	while(cin>>n>>m){
		
		numbers.assign(1000001, vector<int>());
		for(int i=1; i<=n;i++){
			cin>>x;
			numbers[x].push_back(i);
		}
		
		while(m--){
			cin>>k>>v;
			
			if(numbers[v].size()>=k){
				cout<<numbers[v][k-1]<<'\n';
			}
			else cout<<"0\n";
		}
		
	}
}
