#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	string secret,guess;
	
	cin>>secret>>guess;
	
	set <pair<char,int>> secretSet;
	
	multiset <char> remainning;	
	
	queue<pair<char,pair<int,bool>>> guessQ;
	
	pair <char,int> v;
	pair <char,pair<int,bool>> value;
	
	for(int i=0;i<secret.size();i++){
		v = make_pair(secret[i],i);
		value = make_pair(guess[i],make_pair(i,0));
		
		secretSet.insert(v);
		remainning.insert(secret[i]);				
		guessQ.push(value);
	}
		
	int bulls = 0,cows = 0;
	while(!guessQ.empty()){
		
		value = guessQ.front();		
		v = make_pair(value.first,value.second.first);
		guessQ.pop();			
		
		if(!value.second.second){					
		
			auto it = secretSet.find(v);
		
			if(it!=secretSet.end()){//Si lo encontro
				secretSet.erase(it);
				bulls++;
				
				auto itr = remainning.find(v.first);
				remainning.erase(itr);			
			}
		
			else{ //No lo encontro y vemos si esta en el otro set
				auto itr = remainning.find(v.first);
				
				if(itr!=remainning.end()){ // Si esta
					value.second.second = 1;
					guessQ.push(value);
				}				
			}		
		}
		else{//Vemos si queda entre los restantes
			auto itr = remainning.find(v.first);
			
			if(itr!=remainning.end()){ // Si esta
					cows++;
					remainning.erase(itr);
				}				
		}
	}
	string output = "";
	
	output+=to_string(bulls);
	output+="A";
	output+=to_string(cows);
	output+="B";
	
	cout<<output<<'\n';
	
		
}
