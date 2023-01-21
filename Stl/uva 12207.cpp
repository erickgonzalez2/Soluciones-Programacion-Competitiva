#include <bits/stdc++.h>
using namespace std;
int main(){
	long int p;
	int c;
	char comand;
	int casos=1;
	long int x;
	
	list<long int> pacients;
	
	while(cin>>p>>c && p && c){
		pacients.clear();
		cout<<"Case "<<casos++<<":\n";
		
		if(p<1000){
		for(int i=1;i<=p;i++){
			pacients.push_back(i);
		}
	}
		else{
		 for(int i=1;i<=1000;i++){
			pacients.push_back(i);
		}
	}
		while(c--){
		
		cin>>comand;
		
		if(comand=='N'){
			cout<<pacients.front()<<'\n';
			x=pacients.front();
			pacients.pop_front();
			pacients.push_back(x);
		}
		
		else{
			cin>>x;
			pacients.remove(x);
			pacients.push_front(x);
			}
		}
	}
}
