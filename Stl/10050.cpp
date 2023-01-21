#include <bits/stdc++.h>
using namespace std;
int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);
	int t;
	int days;
	int np;
	int x;
	
	cin>>t;
	while(t--){
		
		vector <int> parties;
		set <int> hartals;
		
		cin>>days;
		
		cin>>np;
		while(np--){
			cin>>x;
			parties.push_back(x);
		}
		
		int num;
		int cons;
		
		for(auto it=parties.begin();it!=parties.end();it++){
			num=*it;
			cons=num;
			while(num<=days){
				if(num%7!=0 && num%7!=6)hartals.insert(num);
				num+=cons;
			}
		}
		
		cout<<hartals.size()<<'\n';
	}
}
