#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int reviews,papers;
	
	string str;	
	vector<int>n;
	while(cin>>reviews>>papers,reviews,papers){
		
	int x;
	n.assign(papers,0);
	
	
	for(int i=0;i<papers;i++){
		cin>>str;		
		for(int j=0;j<reviews;j++){
			cin>>x;
			n[x]++;
		}
	}
		
	 int count = count_if(n.begin(), n.end(), [&papers](int &i) {
        return i > papers;
    });
    
    cout<<count<<'\n';
    
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
