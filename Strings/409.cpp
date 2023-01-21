#include <bits/stdc++.h>

using namespace std;


int main(){
	
	
	int w,e;
	int sets = 1;
	while(cin>>w>>e){
		
		map<string,int>words;
		vector<string>excuses;
		string str;
		
		for(int i=0;i<w;i++){
			cin>>str;
			words.insert(make_pair(str,i));
		}
		cin.ignore();
		
		for(int j=0;j<e;j++){
			getline(cin,str);
			excuses.push_back(str);
		}
		
		vector<pair<int,int>>order;
		int max=0;
		int c=0;			
		str="";
		for(int i=0;i<excuses.size();i++){
			
			for(int j=0;j<excuses[i].size();j++){
				
				if(isalpha(excuses[i][j]))str+=excuses[i][j];
				
				else{					
					transform(str.begin(),str.end(),str.begin(),::tolower);
					auto it = words.find(str);					
					if(it!=words.end()){	
					c++;									
					}
					str="";	
				}
			}
			if(c>max)max=c;
			order.push_back(make_pair(c,i));
			c=0;
		}
		
		
		cout<<"Excuse Set #"<<sets++<<'\n';
		
		for(int i=0;i<order.size();i++){
			
			if(max==order[i].first)cout<<excuses[order[i].second]<<'\n';
			
			
		}
		cout<<'\n';
	}
	
	
	
	
	
}
