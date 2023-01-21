#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector <int> v;
	
	int n;
	int x;
	
	
	cin>>n;
	
	while(n--){
	
	cin>>x;
	v.push_back(x);
		
	}
	
	
	sort(v.begin(),v.end(),greater<int>());
	
	
	for(int i=0;i<3;i++){
		cout<<v[i]<<"\n";
	}
	
}
