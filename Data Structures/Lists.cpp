#include <bits/stdc++.h>


using namespace std;


int main(){
	
	
	list <int> lista;
	
	
	for(int i=1;i<=10;i++){
		lista.push_back(i);
	}
	
	list<int> :: iterator it = lista.begin();
	int j = 1;
	while(j!=20){
		cout<<*it<<'\n';
		*it++;
		
		if(j<=10){
			lista.remove(j);							
		}
		j++;
		if(lista.empty())cout<<"Esta vacia";
	}
	
	
	
	
}
