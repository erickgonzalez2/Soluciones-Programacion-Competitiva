#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int ne;
	int a;
	cin>>ne;
	while(ne!=0){
		vector <int> vec;
		bool band=true;
		while(ne--){
			cin>>a;
			vec.push_back(a);
		}
		sort(vec.begin(),vec.end(),greater <int>());
		for(int i=0;i<vec.size()-1;i++){
			if(1422-vec[0]>100){
					band=false;
				break;
			}
			if(vec[i]-vec[i+1]>200){
				band=false;
				break;
			}
		}
		if(band==false)cout<<"IMPOSSIBLE\n";
		else cout<<"POSSIBLE\n";
		cin>>ne;
	}
}
