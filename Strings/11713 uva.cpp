#include <bits/stdc++.h>
using namespace std;
int main(){
	int nc;
	string a,b;
	bool band=true;
	cin>>nc;
	while(nc--){
		cin>>a>>b;
		if(a.size()==b.size()){
			for(int i=0;i<a.size();i++){
				if(a[i]!='a'&& a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u'){
					if(a[i]==b[i])continue;
					else{
						band=false;
						break;
					}
				}
			}
		}
		else band=false;
		if(band==true)cout<<"Yes\n";
		else cout<<"No\n";
		band=true;
	}
}
