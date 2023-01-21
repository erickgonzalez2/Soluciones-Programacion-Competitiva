#include <bits/stdc++.h>
using namespace std;
int main(){
	int nw,nlines,nchar;
	while(cin>>nw>>nlines>>nchar){
		
		string word;
		string str="";
		vector<string>words;
		
		while(nw--){
			cin>>word;
			words.push_back(word);
			words.push_back(" ");
		}
		words.pop_back();
		int size=0;
		int lines=1;
		int pages=1;
		
		for(int i=0;i<words.size();i++){
			if(size+words[i].size()<=nchar){
				size+=words[i].size();
			}
			else{
				lines++;
				if(words[i]!=" ")size=words[i].size();
				else size=0;
				if(lines>nlines){
					lines=1;
					pages++;
				}
			}
		}
		cout<<pages<<'\n';
	}
}
