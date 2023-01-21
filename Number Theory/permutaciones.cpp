#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector <int> arreglo;
	vector <int> prev;
	vector <int> next;
	
	int x;
	
	for(int i = 0; i<5;i++){
		cin>>x;
		arreglo.push_back(x);	
	}	
	
	prev = arreglo;
	next = arreglo;
	
	for(int i:arreglo){
		cout<<i<<" ";	
	}
	cout<<'\n';
	
	next_permutation(next.begin(),next.end());
	prev_permutation(prev.begin(),prev.end());
	
	cout<<"Next permutation: \n";
	
	for(int i:next){
		cout<<i<<" ";	
	}
	cout<<'\n';
	
	
	cout<<"Previous permutation: \n";
	
	for(int i:prev){
		cout<<i<<" ";	
	}
	cout<<'\n';
	
	
	
}
