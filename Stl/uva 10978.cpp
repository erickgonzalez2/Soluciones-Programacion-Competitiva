#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	while(cin>>n && n){
	
	vector <pair<string,string>> bee;
	vector <string>arrange;
	string sr,str;
	
	for(int i = 0; i < n;i++){
		
		cin>>sr>>str;
		
		bee.push_back(make_pair(sr,str));
		
	}
	
	int it = 0;
	int blanks = 0;
	int i = 0;
	int x = -1;
	arrange.assign(n,"");
	
	while(it<n){
		
		i = bee[it].second.size();
		
		
		
		blanks = 0;
		
		while(blanks!=i){
			
			if(x==n-1){
				if(arrange[0]==""){
					blanks++;
					x=0;
					}
				else x=0;
				}
			
			else{
			
			if(arrange[x+1]==""){
				x++;
				blanks++;
				}
			
			else{
				x++;
				
			
				}
			
			}
			
		}
		
		arrange[x] = bee[it].first;
		it++;
		}
	
	cout<<arrange[0];
	
	for(int k = 1; k < n; k++){
		cout<<" "<<arrange[k];;
		}
	
	cout<<'\n';
	}
	
}
