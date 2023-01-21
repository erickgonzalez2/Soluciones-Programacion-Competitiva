#include <bits/stdc++.h>
using namespace std;
int main(){
	cout<<"Hola";
	string x;
	
	set <string> ignored;
	
	while(cin>>x){
		if(x=="::")break;
		ignored.insert(x);
	}
	
	vector <string> sentences;
	
	cin.ignore();
	
	int i=5;
	while(i--){
		getline(cin,x);
		for(int i=0;i<x.length();i++)if(x[i]!=' ')x[i]= tolower(x[i]);
		sentences.push_back(x);
	}
	
	multimap<string,string>order;
	string aux;

	
	for(int i=0;i<sentences.size();i++){
		istringstream iss(sentences[i]);
		
		while(iss>>aux){
			auto it=ignored.find(aux);
			if(it==ignored.end()){
				for(int j=0;j<aux.length();j++)if(aux[j]!=' ')aux[j]= toupper(aux[j]);
				order.insert({aux,sentences[i]});
			}
		}
	}
	
	string str;
	string word;
	for(auto it=order.begin();it!=order.end();it++){
		aux="";
		str=it->second;
		for(int j=0;j<str.length();j++)if(str[j]!=' ')str[j]= toupper(str[j]);
		istringstream is(str);
		
		while(is>>word){
			if(word!=it->first){
			for(int i=0;i<word.length();i++)word[i]= tolower(word[i]);
			aux+=word;
			aux+=" ";
		}
		it->second=aux;
		
		}
	}
	
	for(auto it=order.begin();it!=order.end();it++){
		cout<<it->second<<'\n';
	}
	
}
