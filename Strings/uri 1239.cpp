#include <iostream>
#include <string>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string str;
	while(getline(cin,str)){
		string aux="";
		bool i=false;
		bool b=false;
		for(auto it=str.begin();it!=str.end();it++){
			if(*it=='_'){
				if(i==false){
					aux+="<i>";
					i=true;
				}
				else{
					aux+="</i>";
					i=false;
				}
			}
			else if(*it=='*'){
				if(b==false){
					aux+="<b>";
					b=true;
				}
				else{
					aux+="</b>";
					b=false;
				}
			}
			else{
				aux+=*it;
			}
		}
		cout<<aux<<'\n';
	}
}
