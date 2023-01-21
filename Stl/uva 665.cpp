#include <bits/stdc++.h>
using namespace std;

list <int> monedas;

void init(list <int>&monedas,int x){
		for(int i=1;i<=x;i++){
			monedas.push_back(i);
		}
	}
	
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int nc,m,k,nm,y;
	char sign;
	
	cin>>nc;
	bool cini=false;
	
	list <int> to_value;
	
	while(nc--){
		if(cini)cout<<"\n";
		cin>>m>>k;
		init(monedas,m);
		while(k--){
		cin>>nm;
		nm*=2;
		while(nm--){
			cin>>y;
			to_value.push_back(y);
		}
		cin>>sign;
		if(sign=='='){
			for(auto it=to_value.begin();it!=to_value.end();it++){
				monedas.remove(*it);
			}
			to_value.clear();
		}
		else {
			to_value.clear();
		}
	}
	if(monedas.size()>1){
		cout<<"0\n";
	}
	else cout<<monedas.front()<<'\n';
	monedas.clear();
	to_value.clear();
		cini=true;
	}
	return 0;
}
