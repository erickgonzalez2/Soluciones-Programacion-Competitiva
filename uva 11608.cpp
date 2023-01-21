#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	int n;
	int cases = 1;
	
	while(cin>>n && n>=0){
		int sum = n;
		int x;
		
		vector <int>created;
		vector <int>used;
		
		for(int i=0;i<12;i++){
			cin>>x;
			created.push_back(x);
		}
		
		for(int i=0;i<12;i++){
			cin>>x;
			used.push_back(x);
		}
		
		
		cout<<"Case "<<cases<<":\n";
		cases++;
		
		for(int i = 0;i<12;i++){
			
			if(sum>=used[i]){
					cout<<"No problem! :D\n";
					sum-=used[i];				
				}
			
			
			else {
					cout<<"No problem. :(\n";
				}
			sum+=created[i];
		}
		
	}
}
