#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int casos;
	int x;
	int sets=1;
	
	cin>>casos;
	while(casos!=0){
		int prom=0;
		int mov=0;
		vector<int>ladrillos;
		while(casos--){
			cin>>x;
			prom+=x;
			ladrillos.push_back(x);
		}
		
		prom=prom/ladrillos.size();
		sort(ladrillos.begin(),ladrillos.end(),greater<int>());
		
		for(auto it=ladrillos.begin();it!=ladrillos.end();it++){
			if(*it>prom){
				mov+=(*it-prom);
			}
			else break;
		}
		
		cout<<"Set #"<<sets<<'\n';
		cout<<"The minimum number of moves is "<<mov<<"."<<'\n';
		cout<<'\n';
		sets++;
		cin>>casos;
	}
	return 0;
}
