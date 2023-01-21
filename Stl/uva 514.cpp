#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	int x;

	while(cin>>n){
		if(n==0)return 0;
		
	
	while(n){
		vector <int> direction;
		bool ignore=false;
		bool possible=true;
			queue  <int> train;
		stack  <int> station;
		
		
		for(int i=1;i<=n;i++){
			train.push(i);
		}
		
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==0){
				ignore=true;
				break;
			}
			direction.push_back(x);
		}
		
		if(ignore){cout<<'\n';break;}
		
		int i=0;
		
		while(1){
			
			if(!train.empty()){
				station.push(train.front());
				train.pop();
				while(!station.empty()){
					if(station.top()==direction[i]){
						i++;
						station.pop();
					}
					else break;
				}
			}
			else break;
		}	
		if(i==n)cout<<"Yes\n";
		else cout<<"No\n";
		
		}
	
	}
}
