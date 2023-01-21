#include <string>
#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string str;
	while(getline(cin,str)){
		bool mayus=false;
		for(int i=0;i<str.size();i++){
			 if (isalpha(str[i])){
				if(mayus==false){
					str[i]= toupper(str[i]);
					mayus=true;
				}
				else{
					str[i]= tolower(str[i]);
					mayus=false;
				}
			}
		}
		cout<<str<<'\n';
	}
}
