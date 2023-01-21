#include <bits/stdc++.h>
using namespace std;

vector <vector <int>>container;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n,q;
	int x,a,b;
	while(cin>>n>>q){
	
	container.assign(1000001,vector<int>());
	
	for(int i=1;i<=n;i++){
		cin>>x;
		container[x].push_back(i);
	}
	
	while(q--){
		cin>>a>>b;
		if(a>container[b].size())cout<<"0\n";
		else cout<<container[b][a-1]<<'\n';
	}
	
	
	}
}
