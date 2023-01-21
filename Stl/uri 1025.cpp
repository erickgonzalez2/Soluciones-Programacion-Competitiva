#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int q,n;
	int casos=1;
	while(cin>>n>>q){
		if(n==0 && q==0)return 0;
		vector<int> num;
		vector<int> pre;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			num.push_back(x);
		}
		for(int i=0;i<q;i++){
			int x;
			cin>>x;
			pre.push_back(x);
		}
		sort(num.begin(),num.end());
		cout<<"CASE# "<<casos<<":\n";
		for(auto it=pre.begin();it!=pre.end();it++){
			bool en=false;
			for(int i=0;i<num.size();i++){
				if(*it==num[i]){
					en=true;
					cout<<*it<<" found at "<<i+1<<'\n';
					break;
				}
			}
			if(en==false)cout<<*it<<" not found\n";
		}
		casos++;
	}
}
