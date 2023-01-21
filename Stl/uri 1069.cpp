#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string str;
	cin>>n;
	cin.ignore();
	while(n--){
		getline(cin,str);
		int diamantes=0;
		int inicio=0,final=0;
		
		for(int i=0;i<str.size();i++){
			if(str[i]=='<'){
				inicio=i;
				break;
			}
		}
		
		for(int i=str.size();i>=0;i--){
			if(str[i]=='>'){
				final=i;
				break;
			}
		}
		int a=0,c=0;
		int i=inicio;
		while(1){
			if(i>final)break;
			if(str[i]=='<')a++;
			if(str[i]=='>'){
				a--;
				diamantes++;
			}
			i++;
		}
		cout<<diamantes;
		a=0;
		c=0;
		str="";
		inicio=0;
		final=0;
		}	
	}
