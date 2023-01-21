#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	
	string conti = " ";
	
	while(conti!="#"){
	
	
	
	int cardD=0;
		
	stack <string> nonDealer;
	stack <string> deckDealer;
	string card;
	
	for(int i=1;i<=52;i++){
		
		cin>>card;
		
		if(i%2==0)deckDealer.push(card);
		
		else nonDealer.push(card);		
	}
	
	int number = 1;
	
	card = nonDealer.top();
	cout<<card<<" nonDealer\n";	
	cardD++;
	nonDealer.pop();
	bool switched = false;
	bool empty = false;
	
	if(card[1]=='J')number = 1;								
	if(card[1]=='Q')number = 2;
	if(card[1]=='K')number = 3;
	if(card[1]=='A')number = 4;
	
	while(!nonDealer.empty() && !deckDealer.empty()){
				
		if(empty)break;		
						
		for(int i = 0;i<number;i++)	{
			
			if(!deckDealer.empty())card = deckDealer.top();
			
			else{
				empty = true;
				break;
			}
			
			cout<<card<<" Dealer\n";
			cardD++;
			deckDealer.pop();
			if(card[1]=='J'){
				number = 1;
				switched = true;
				break;
			}								
			if(card[1]=='Q'){
				number = 2;
				switched = true;
				break;
			}
			if(card[1]=='K'){
				number = 3;
				switched = true;
				break;
			}
			if(card[1]=='A'){
				number = 4;
				switched = true;
				break;
			}
						
		}
		
		if(!switched){			
			number = 1;
		}
		
		else switched = false;
		
		
		if(empty)break;
		
			for(int i = 0;i<number;i++)	{
			
			if(!nonDealer.empty())card = nonDealer.top();
			
			else{
				empty = true;
				break;
			}
			
			cout<<card<<" nonDealer\n";
			cardD++;
			nonDealer.pop();
			if(card[1]=='J'){
				number = 1;
				switched = true;
				break;
			}								
			if(card[1]=='Q'){
				number = 2;
				switched = true;
				break;
			}
			if(card[1]=='K'){
				number = 3;
				switched = true;
				break;
			}
			if(card[1]=='A'){
				number = 4;
				switched = true;
				break;
			}
			
		}
		
		if(!switched){			
			number = 1;
		}
		
		else switched = false;
		
			
		
		
	}
	
	if(nonDealer.empty()){
		cout<<"1 "<<cardD<<"\n";
	}
	
	else cout<<"2 "<<cardD<<"\n";
	
	cin>>conti;
 }
}
