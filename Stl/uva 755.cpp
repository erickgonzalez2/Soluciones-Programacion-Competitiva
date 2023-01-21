#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	int ns;
	bool nec=false;
	string str;
	
	cin>>n;
	cin.ignore();
	getline(cin,str);
	while(n--){
		if(nec==true)cout<<'\n';
		else nec=true;
		
		map<string,int> phones;
		
		bool dupli=false;
		
		cin>>ns;

		while(ns--){
			cin>>str;
			string word="";
			
			for(auto it=str.begin();it!=str.end();it++){
				
				if(isdigit(*it))word+=*it;
				
				else if(isalpha(*it)){
					
					switch(*it){
						case 'A':
						case 'B':
						case 'C':
						word+='2';
						break;
						
						case 'D':
						case 'E':
						case 'F':
						word+='3';
						break;
						
						case 'G':
						case 'H':
						case 'I':
						word+='4';
						break;
						
						case 'J':
						case 'K':
						case 'L':
						word+='5';
						break;
						
						case 'M':
						case 'N':
						case 'O':
						word+='6';
						break;
						
						case 'P':
						case 'R':
						case 'S':
						word+='7';
						break;
						
						case 'T':
						case 'U':
						case 'V':
						word+='8';
						break;
						
						case 'W':
						case 'X':
						case 'Y':
						word+='9';
						break;

					}
					
				}
				
			}
				word.insert(3,"-");
				auto itr= phones.find(word);
				if(itr!=phones.end())itr->second++;
				else phones.insert({word,1});
			
		}
		
		for(auto itr=phones.begin();itr!=phones.end();itr++){
			if(itr->second>1){
				cout<<itr->first<<" "<<itr->second<<"\n";
				dupli=true;
			}
		}
		if(dupli==false)cout<<"No duplicates.\n";
		
	}
}
