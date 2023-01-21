#include <iostream>
#include <string>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	string str;
	cin>>n;
	cin.ignore();
	while(n--){
		getline(cin,str);
		for(int i=0;i<str.size();i++){
			if(isalpha(str[i]))str[i]+=3;
		}
		string word ="";
		for(int i=str.size()-1;i>=0;i--){
			word+=str[i];
		}
		
			for(int i=word.size()/2;i<word.size();i++){
				word[i]-=1;
			}
		cout<<word<<'\n';
		}
	}
