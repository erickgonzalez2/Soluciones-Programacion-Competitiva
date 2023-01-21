#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	
	cin>>t;
	
	while(t--){
		
		int b,m,x;
		
		vector <int>bloques;
		
		cin>>b>>m;
		while(b--){
			cin>>x;
			bloques.push_back(x);
		}
		
		int sum=0,i = 0;
		
		sort(bloques.begin(),bloques.end(),greater<int>());
		
		
		while(m!=0){
			
			if(m>=bloques[i]){
			
			sum+= m/bloques[i];
			m = m%bloques[i];
			}
			
			i++;
		}
		cout<<sum<<'\n';
	}
	
}
