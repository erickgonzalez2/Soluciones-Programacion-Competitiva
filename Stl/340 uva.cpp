#include <bits/stdc++.h>

using namespace std;

int code[1000];
bool isStrong[1000];
bool isWeak[1000];

int findWeaks(int num,int n){
	
	int w = 0;
	
	for(int i=0;i<n;i++){
		
		if(code[i]==num && !isStrong[i] && !isWeak[i]){
			
			isWeak[i]=true;
			w++;
			break;						
		}		
	}
		
	return w;
}

pair<int,int> hints(vector <int> guess,int n){
	
	pair <int,int> v = {0,0};
	
	//find strong matches
	
	for(int i=0;i<n;i++){
		
		if(guess[i]==code[i]){
			
			isStrong[i]=true;
			v.first++;
		}		
	}
	
	for(int i=0;i<n;i++){
		
		if(!isStrong[i])v.second+=findWeaks(guess[i],n);
		
	}
	//find weak matches
	
	
	return v;
}


int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);
		
	int n;
	int ng = 1;
		
	while(cin>>n , n){
		
		for(int i=0;i<n;i++){
			cin>>code[i];
		}
								
		int g = 1;
		vector <pair<int,int>>allh;
		int nh = 0;
				
		while(g!=0){
			
			vector<int>guess;
			
			for(int i=0;i<n;i++){
				
				cin>>g;
				guess.push_back(g);				
			}			
			if(g==0)break;
			memset(isStrong,0,n);
			memset(isWeak,0,n);
			allh.push_back(hints (guess,n));
			nh++;						
		}
		
		cout<<"Game "<<ng++<<":\n";
		
		for(int i=0;i<nh;i++){
			cout<<"    ("<<allh[i].first<<","<<allh[i].second<<")\n";
		}
		
	}
	
}
