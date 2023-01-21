#include <bits/stdc++.h>
using namespace std;

int main(){
	
	vector <int>pole;
	vector <pair<int,int>>position;
	
	int n;
	while(cin>>n && n){
		
		pole.assign(n,0);		
		
		int num,pos;
		
		while(n--){
			cin>>num>>pos;
			position.push_back(make_pair(num,pos));
		}
		
		int m,k;
		bool correct = true;
		
		for(int i=0;i<position.size();i++){
			
			m = position[i].first;
			k = position[i].second;
			
			if(k==0){
				if(!pole[i])pole[i]=m;
			}
			
			else{
				
				if(k<0){
					if((k*-1)>position.size()){
						correct = false;
						break;
					}
					
					else{
						k*=-1;
						if(!pole[i-k]){
							pole[i-k] = m;
						}
						else{
							correct = false;
							break;
						}
					}
				}
				
				else if(k>0){
					if(k>position.size()){
						correct = false;
						break;
					}
					
					else{
						if(!pole[i+k]){
							pole[i+k] = m;
						}
						else{
							correct = false;
							break;
						}
					}
				}
			}
			
		}
	
		if(correct){
			for(int i=0;i<pole.size();i++){
				cout<<pole[i];
				if(i!=pole.size()-1)cout<<" ";
			}
			cout<<'\n';
		}
		else cout<<"-1\n";
	position.clear();	
		
		
	}
	
	
}
