#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	multimap <char,int> soundex;
	soundex.insert(pair <char,int>('B',1));
	soundex.insert(pair <char,int>('F',1));
	soundex.insert(pair <char,int>('P',1));
	soundex.insert(pair <char,int>('V',1));
	soundex.insert(pair <char,int>('C',2));
	soundex.insert(pair <char,int>('G',2));
	soundex.insert(pair <char,int>('J',2));
	soundex.insert(pair <char,int>('K',2));
	soundex.insert(pair <char,int>('Q',2));
	soundex.insert(pair <char,int>('S',2));
	soundex.insert(pair <char,int>('X',2));
	soundex.insert(pair <char,int>('Z',2));
	soundex.insert(pair <char,int>('D',3));
	soundex.insert(pair <char,int>('T',3));
	soundex.insert(pair <char,int>('L',4));
	soundex.insert(pair <char,int>('M',5));
	soundex.insert(pair <char,int>('N',5));
	soundex.insert(pair <char,int>('R',6));
	
	string str;
	while(cin>>str){
		int anterior=0;
		for(auto it=str.begin();it!=str.end();it++){
			auto itr=soundex.find(*it);
			if(itr!=soundex.end()&&itr->second!=anterior){
				cout<<itr->second;
				anterior=itr->second;	
			}
			else anterior=itr->second;
		}
		cout<<'\n';
	}
}
