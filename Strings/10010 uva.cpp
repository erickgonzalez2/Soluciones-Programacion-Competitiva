#include <bits/stdc++.h>

using namespace std;

char grid[50][50];

bool left(string str,int i,int j){
	int k = 0;
	string temp="";
	for(j;j>=0;j--){
		if(str[k]==grid[i][j]){
		k++;
		temp+=grid[i][j];	
		}
		
		else return false;
		
		if(k>=str.size())break;
				
	}
	if(temp==str)return true;
	else return false;
	
}


bool right(string str,int i,int j,int m){
	
	int k=0;
	string temp="";
	
	for(j;j<m;j++){
		if(str[k]==grid[i][j]){
			k++;
			temp+=grid[i][j];
		}
		
		else return false;
		
		if(k>=str.size())break;
				
	}
	if(temp==str)return true;
	else return false;
}


bool down(string str,int i,int j,int n){
	
	int k=0;
	string temp="";
	for(i;i<n;i++){
		if(str[k]==grid[i][j]){
			k++;
			temp+=grid[i][j];
		}
		
		else return false;
		
		if(k>=str.size())break;
	}
	if(temp==str)return true;
	else return false;
}


bool up(string str,int i,int j){
	int k=0;
	string temp="";
	
	for(i;i>=0;i--){
		
		if(str[k]==grid[i][j]){
			k++;
			temp+=grid[i][j];
		}
	
		else return false;
		
		if(k>=str.size())break;
	}
	if(temp==str)return true;
	else return false;
}


bool leftdown(string str,int i,int j,int n){
	int k=0;
	string temp="";
	
	for(i,j;i<n,j>=0;i++,j--){
		
		if(str[k]==grid[i][j]){
			k++;
			temp+=grid[i][j];
		}
		else return false;
		
		if(k>=str.size())break;
		
	}
	if(temp==str)return true;
	else return false;		
}


bool rightdown(string str,int i,int j,int n,int m){
	int k=0;
	string temp="";
	
	for(i,j;i<n,j<m;i++,j++){
		if(str[k]==grid[i][j]){
			
			k++;
			temp+=grid[i][j];
		}
		else return false;
		
		if(k>=str.size())break;
	}
	if(temp==str)return true;
	else return false;
}


bool upleft(string str,int i,int j){
	int k=0;
	string temp="";
	
	for(i,j;i>=0,j>=0;i--,j--){
	if(str[k]==grid[i][j]){
			k++;
			temp+=grid[i][j];
		}
		else return false;
		if(k>=str.size())break;
	}
	if(temp==str)return true;
	else return false;
}


bool upright(string str,int i,int j,int m){
	int k=0;
	string temp="";
	
	for(i,j;i>=0,j<m;i--,j++){
	if(str[k]==grid[i][j]){
			k++;
			temp+=grid[i][j];
		}
		else return false;
		if(k>=str.size())break;
	}
	if(temp==str)return true;
	else return false;
	
}

int main(){
	
	int t;
	int n,m;
	int k;
	string str;			
	
	cin>>t;
	
	
	while(t--){		
	
	cin.ignore();
	
	getline(cin,str);
	
	cin>>n>>m;
					
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>grid[i][j];
			grid[i][j]= tolower(grid[i][j]);
		}
	}
		
	cin>>k;	
	
	vector<pair<int,int>>pq;
	
	while(k--){
	cin>>str;
	
	bool f = false;
	transform(str.begin(), str.end(), str.begin(), ::tolower);				
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(grid[i][j]==str[0]){				
				if(left(str,i,j)){
					pq.push_back(make_pair(i+1,j+1));
					f =true;
					break;
				}
				else if(right(str,i,j,m)){
					pq.push_back(make_pair(i+1,j+1));
					f =true;
					break;
				}
				else if(down(str,i,j,n)){
					pq.push_back(make_pair(i+1,j+1));
					f =true;
					break;
				}
				else if(up(str,i,j)){
					pq.push_back(make_pair(i+1,j+1));
					f =true;
					break;
				}
				else if(leftdown(str,i,j,n)){
					pq.push_back(make_pair(i+1,j+1));
					f =true;
					break;
				}
				else if(rightdown(str,i,j,n,m)){
					pq.push_back(make_pair(i+1,j+1));
					f =true;
					break;
				}
				else if(upleft(str,i,j)){
						pq.push_back(make_pair(i+1,j+1));
						f =true;
						break;
				}
				else if(upright(str,i,j,m)){
						pq.push_back(make_pair(i+1,j+1));
						f =true;
						break;
				}
			}
		}
		if(f)break;
	}
	
			
	}
	
	for(int i=0;i<pq.size();i++){
		cout<<pq[i].first<<" "<<pq[i].second<<'\n';
		
	}
	pq.clear();
	if(t>0)cout<<'\n';
	
		
	}
}
