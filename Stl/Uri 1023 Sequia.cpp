#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	int caso = 1;
	
	while(cin>>n && n){
		
		map <int,int> consumo_ind;
		
		if(caso!=1)cout<<'\n';
	
		int prom = 0;
		int cities = 0;
		
		int ciudades,consumo, x;
		int indice;
		
		while(n--){
		
		
		cin>>ciudades>>consumo;
		
		cities+=ciudades;
		prom += consumo;
		
		x = consumo/ciudades;
		indice = (int)x;
		
		
		auto it = consumo_ind.find(indice);
		
		if(it==consumo_ind.end()){
			consumo_ind.insert({indice,ciudades});
		}
		
		else{
			
			it->second+=ciudades;
			
		}
		
	}
	
	cout<<"Cidade# "<<caso<<":\n";
	
	
	for(auto itr = consumo_ind.begin(); itr!= consumo_ind.end();itr++){
		
		if(itr!=consumo_ind.end()--)cout<<itr->second<<"-"<<itr->first<<" ";
		else cout<<cout<<itr->second<<"-"<<itr->first;
		
		
		
	}
	cout<<'\n';
	
	
	printf("Consumo medio: %.2f m3.\n", floor(100 * (float)prom/cities) / 100);
		
	caso++;
	}
	
	
	
}
