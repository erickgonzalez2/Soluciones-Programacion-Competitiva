#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int casos;
	string str;
	cin>>casos;
	cin.ignore();
	while(casos--){
		
		queue <int>godzilla;
		queue <int>mecha;
		int g,m,x;
		getline(cin,str);
		cin>>g>>m;
		
		for(int i=0;i<g;i++){
			cin>>x;
			godzilla.push(x);
		}
		
		for(int i=0;i<m;i++){
			cin>>x;
			mecha.push(x);
		}
		
		int u,v;
		while(!mecha.empty() && !godzilla.empty()){
			u = godzilla.front();
			v = mecha.front();
			
			if(u==v)mecha.pop();
			
			else if(u>v)mecha.pop();
			
			else godzilla.pop();
		}
		if(godzilla.empty())cout<<"MechaGodzilla\n";
		else cout<<"Godzilla\n";
	}	
}
