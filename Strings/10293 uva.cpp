#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	string aux="";
	string word="";
	int l,f=0;
	vector< pair <int,int> > frequency;
	
	while(getline(cin,str)){
		if(str=="#")break;
		if(str[str.size()-1])aux+=str;
		else{
			aux+=str;
			for(int i=0;i<aux.size();i++){
				if(aux[i]=='-' || aux[i]=='\'')aux.erase(i,1);
				if(isalpha(aux[i])){
					word+=aux[i];
				}
				else {
					l = word.size();
						for(int j=0;j<frequency.size();j++){
							if(l==frequency[j].first){
								frequency[j].second++;
							}
							else {
								f=1;
								frequency.push_back(make_pair(l,f));
							}
						}
					
					word="";
				}
			}
			aux="";
		}
	}
	sort(frequency.begin(), frequency.end());
		cout<<frequency[0].first<<" "<<frequency[0].second<<'\n';
		
		return 0;
}
