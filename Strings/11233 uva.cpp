#include <bits/stdc++.h>
using namespace std;
int main(){
	int ni,nw;
	bool band=false;
	cin>>ni>>nw;
	string a,b;
	string sing;
	vector<pair <string,string>>irr;
	for(int i=0;i<ni;i++){
		cin>>a>>b;
		irr.push_back(make_pair(a,b));
	}
	
	for(int i=0;i<nw;i++){
		band=false;
		cin>>sing;
		for(int j=0;j<ni;j++){
			if(sing==irr[j].first){
			sing=irr[j].second;
			band=true;
				}			
	}
	if(band==true);
	else{
		int u,pu;
		u=sing.length()-1;
		pu=sing.length()-2;
		
		if(sing[pu]!='a' && sing[pu]!='e' && sing[pu]!='i' && sing[pu]!='o' && sing[pu]!='u' && sing[u]=='y'){
				sing.erase(u);
				sing+="ies";
		}
		else if(sing[u]=='o' || sing[u]=='s' || sing[u]=='x')sing+="es";
		else if(sing[pu]=='c' && sing[u]=='h')sing+="es";
		else if(sing[pu]=='s' && sing[u]=='h')sing+="es";
		else sing+='s';

	}
	cout<<sing<<'\n';
		}	
}
