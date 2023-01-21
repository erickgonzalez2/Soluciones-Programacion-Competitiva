#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int g;
	int gr;
	string str;
	while(cin>>g && g){
		cin>>str;
		string aux="";
		string word="";
		gr=str.length()/g;
		int j=0;
		for(int i=0;i<str.length();i++){
			aux+=str[i];
			j++;
			if(j==gr){
				j=0;
				for(int it=aux.length()-1;it>=0;it--){
					word+=aux[it];
				}
				aux="";
			}
		}
		cout<<word<<'\n';
	}
}
