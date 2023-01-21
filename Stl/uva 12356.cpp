#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	long int soldiers;
	long int loss;
	
	while(cin>>soldiers>>loss && soldiers && loss){
		
		vector <long int> army;
		long int left,right;
		
		for(long int i=0;i<=soldiers;i++){
			army.push_back(i);
		}
		
		
		while(loss--){
			bool all_d=true;
			cin>>left>>right;
			
			for(long int i=left;i<=right;i++){
				army[i]=0;
			}
			
			for(long int i=left;i>0;i--){
				if(army[i]!=0){
					cout<<army[i];
					all_d=false;
					break;
				}
			}
			if(all_d)cout<<"*";
			all_d=true;
			
			for(long int i=right;i<=soldiers;i++){
				if(army[i]!=0){
					cout<<" "<<army[i]<<'\n';
					all_d=false;
					break;
				}
			}
			if(all_d)cout<<" *\n";
		}
		
		cout<<"-\n";
		
	}
}
