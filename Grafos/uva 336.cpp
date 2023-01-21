#include <bits/stdc++.h>

using namespace std;

vector < vector <int>> grafo;

int main(){
	
	int edges;
	int casos=1;
	
	
	while(cin>>edges && edges){
	
		grafo.assign(30,vector<int>());
		map <int,int> conexiones;
		map <int,int> :: iterator search;
		map <int,int> :: iterator search2;
		vector <pair <int,int>> tll;
		
		
		int a,b;
		int i = 0;
		int indicea,indiceb;
			
		
		while(edges--){
			
			cin>>a>>b;
			
			search = conexiones.find(a);
			
			if(search == conexiones.end()){
				
				conexiones.insert({a,i});
				indicea =i;
				i++;
			}
			
			else{
				indicea = search->second;
			}
			
			search = conexiones.find(b);
			
			if(search == conexiones.end()){
				
				conexiones.insert({b,i});
				indiceb = i;
				i++;
			}
			
			else{
				indiceb = search ->second;
			}
			
			grafo[indicea].push_back(indiceb);
			grafo[indiceb].push_back(indicea);
		}
		
		
		while(cin>>a>>b && a && b){
			
			tll.push_back(make_pair(a,b));
			
		}
		
		for(int j = 0; j < tll.size(); j++){
			
			int indice, time;
			vector <int>d;
			vector <int>t;
			int count = 0;
			
			search = conexiones.find(tll[j].first);
			search2 = conexiones.find(tll[j].second);
			
			if(search!=conexiones.end()){
			
			
			time = tll[j].second;
			indice = search->second;
			
			
			
			d.assign(conexiones.size(),1000000);
			t.assign(conexiones.size(),1000000);
			
			d[indice] = 0;
			t[indice] = time;
			
			queue <int> q;
			q.push(indice); 
			
			while(!q.empty()){
				
				int u = q.front();
				q.pop();
				
				for(int j = 0;j< (int)grafo[u].size();j++){	
					
				int v = grafo[u][j];
				
				if(d[v]==1000000 && t[u]!=1000000 && t[u]!=0){
				t[v] = t[u]-1;
				d[v] = d[u]+1;
				q.push(v);
		}
				
			}
				
				
			}
		}
		else{
			count+=2;
		}
		
			
			
			for(int j = 0; j<t.size();j++){
				if(t[j]==1000000)count++;
			}
			
		
			cout<<"Case "<<casos<<": "<<count<<" nodes not reachable from node "<<search->first<<
			" with TLL = "<<time<<".\n";
			casos++;
			
		}
		
	}
	

}
	
	
