#include <bits/stdc++.h>
using namespace std;
int main(){
	string x;
	
	set <string> ignored;
	vector <string> sentences;
	multimap<string,string>order;
	
	set <string> ::iterator search;
	
	
	while(cin>>x){
		if(x=="::")break;
		ignored.insert(x);
	}
	
	
	cin.ignore();
	
	int i=98;
	while(i--){
		getline(cin,x);
		for(int i=0;i<x.length();i++)x[i]= tolower(x[i]);
		sentences.push_back(x);
	}
	
	string aux="";
	string llave="";
	string word="";
	int principio=0;
	int final;
	
	for(auto it:sentences){
		for(i=0;i<it.length();i++){
			
			if(it[i]!=' ')aux+=it[i];
			if(it[i]==' '||i==it.length()-1){
				
				search= ignored.find(aux);
				if(search!=ignored.end()){
					aux="";
					if(it[i]==' ')principio=i+1;
					else if(i==it.length()-1)principio=0;
				}
				
				
				else{
					if(it[i]==' ')final=i-1;
					else if(i==it.length()-1)final=i;
					
					for(int j=0;j<it.length();j++){
						if(j>=principio && j<=final){
							llave+= toupper(it[j]);
							word+=toupper(it[j]);
						}
						else word+= it[j];
					}
					if(it[i]==' ')principio=i+1;
					else if(i==it.length()-1)principio=0;
					order.insert({llave,word});
					aux="";
					word="";
					llave="";
				}
			}
		}
	}
	
	for(auto it=order.begin();it!=order.end();it++){
		cout<<it->second<<'\n';
	}
	
}
