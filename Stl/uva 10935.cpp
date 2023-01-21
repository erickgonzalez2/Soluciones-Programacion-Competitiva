#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n!=0){
		
		list<int> cards;
		queue<int> discards;
		
		for(int i=1;i<=n;i++){
			cards.push_back(i);
		}
		
		while(cards.size()!=1){
			auto it=cards.front();
			discards.push(it);
			cards.pop_front();
			
			it=cards.front();
			cards.pop_front();
			cards.push_back(it);
		}
		
		cout<<"Discarded cards: ";
		
		while(!discards.empty()){
			cout<<discards.front();
			if(discards.size()!=1)cout<<", ";
			discards.pop();
		}
		cout<<'\n';
		cout<<"Remaining card: ";
		cout<<cards.front()<<'\n';
		
		cin>>n;
	}
	cout<<'\n';
}
