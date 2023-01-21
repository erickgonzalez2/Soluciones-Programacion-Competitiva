#include <bits/stdc++.h>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);cin.tie(0);
	
	int n;
	char x;

	
	while(cin>>n && n){
		
		vector <char> movimientos;
		queue <char> entrada;
		queue <char> salida;
		stack <char> aux;
		
		for(int i=0;i<n;i++){
			cin>>x;
			entrada.push(x);
		}
		
		for(int i=0;i<n;i++){
			cin>>x;
			salida.push(x);
		}
		
		while(!entrada.empty()){
			
			x = entrada.front();
			entrada.pop();
			
			aux.push(x);
			movimientos.push_back('I');
			
			while(true){
				
				if(aux.empty())break;
				
				if(aux.top()==salida.front()){
					movimientos.push_back('R');
					aux.pop();
					salida.pop();
				}
				else break;
			}
			
		}
		
		for(int i=0;i<movimientos.size();i++){
			cout<<movimientos[i];
		}
		
		if(!salida.empty())cout<<" Impossible\n";
		else cout<<'\n';
	}
	
	
	
}
