#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	int h,cs;
	int b;
	vector<int> hom;
	cin>>n;
	while(n--){
		cin>>h>>cs;
		b=cs;
		for(int i=1;i<=h;i++){
			hom.push_back(i);
		}
		while(hom.size()!=1){
			if(cs>hom.size())cs=cs-hom.size();
			hom.erase(cs+1);
			cs=cs+b;
		}
		cout<<hom[0];
	}
}
