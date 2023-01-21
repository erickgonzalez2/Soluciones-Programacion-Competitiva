#include <iostream>
#include <string>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	char a;
	string str;
	while(cin>>a>>str){
		if(a=='0'&& str=="0")return 0;
		string word="";
		for(int i=0;i<str.size();i++){
			if(str[i]!=a)word+=str[i];
		}
		bool band=true;
		for(int i=0;i<word.size();i++){
			if(word[i]!='0'){
				band=false;
				break;
			}
		}
		if(band==true || word=="")cout<<"0\n";
		else{
			int x=0;
			for(int i=0;i<word.size();i++){
				if(word[i]=='0'){
					x++;
				}
				else{
					break;
				}
			}
			string s0="";
			for(int i=x;i<word.size();i++){
				s0+=word[i];
			}
			cout<<s0<<'\n';
		}
	}
}
