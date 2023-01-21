#include <bits/stdc++.h>
using namespace std;

vector < vector <int>> grafo;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int casos;
	string str;
	int c=1;
	
	cin>>casos;	
	
	while(casos--){
		
		grafo.assign(27,vector<int>());
		
		cin>>str;
		
		int nodea,nodeb;
		stack <int>lead;
		
		lead.push(str[0]-65);
		
		for(int i=1;i<str.size();i++){
			
			nodea = lead.top();
			nodeb = str[i]-65;
			
			
			if(nodea==nodeb){
				lead.pop();
			}
			else{
				grafo[nodea].push_back(nodeb);
				grafo[nodeb].push_back(nodea);
				lead.push(nodeb);
			}
			
		}
		
		cout<<"Case "<<c<<'\n';
		c++;
		char node;
		
		for(int i=0;i<grafo.size();i++){
			if(grafo[i].size()!=0){
				node = i+65;
				cout<<node<<" = "<<grafo[i].size()<<'\n';
			}
		}
	}
	
}
