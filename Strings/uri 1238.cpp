#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	string a,b,c;
	int l;
	cin>>n;
	cin.ignore();
	while(n--){
		cin>>a>>b;
		l= a.size()+b.size();
		for(int i=0,j=0;i<l,j<l;i++,j++){
			if(i<a.size())c+=a[i];
			if(i<b.size())c+=b[i];
		}
		cout<<c<<'\n';
		c.clear();
	}
}
