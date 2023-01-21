#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int nc;
	int places;
	int menor;
	int p,f,x,k;
	string str,word;
	string ignored;
	vector <vector<int>> gr;
	
	cin>>nc;
	f=nc;
	while(nc--){
		if(f!=nc){
			getline(cin,ignored);
		}
		
		cin>>places;
		p=places;
		cin.ignore();
		
		gr.assign(1001,vector<int>());
		k=1;
		
		while(places--){
			getline(cin,str);
			istringstream iss(str);
			
			while(iss>>word){
				x = stoi(word);
				gr[k].push_back(x);
			}
			
			if(k==1)menor= gr[k].size();
			else if(gr[k].size()<menor)menor= gr[k].size();
			
			k++;
		}
		
		bool prim=false;
		
		for(int i=1;i<=p;i++){
			if(gr[i].size()==menor && !prim){
				cout<<i;
				prim=true;
			}
			else if(gr[i].size()==menor)cout<<" "<<i;
		}
		
		cout<<'\n';
		gr.clear();	
		}
		
	}
	
