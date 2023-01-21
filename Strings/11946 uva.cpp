#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int n;
	cin>>n;
	while(n--){
		while(getline(cin,str)){
			for(string:: iterator it=str.begin();it!=str.end();it++){
				if(isdigit(*it)){
					switch(*it){
						case '0':
						cout<<'O';
						break;
						case '1': 
						cout<<'I';
						break;
						case '2': 
						cout<<'Z';
						break;
						case '3': 
						cout<<'E';
						break;
						case '4': 
						cout<<'A';
						break;
						case '5': 
						cout<<'S';
						break;
						case '6': 
						cout<<'G';
						break;
						case '7': 
						cout<<'T';
						break;
						case '8': 
						cout<<'B';
						break;
						case '9': 
						cout<<'P';
						break;
					}
				}
				else cout<<*it;
			}
			if(str!="\0")cout<<'\n';
		}
	}
}
