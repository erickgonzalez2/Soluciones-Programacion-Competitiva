#include <bits/stdc++.h>
using namespace std;
int main(){
	int nc;
	string str;
	string num="";
	string let="";
	int fnum;
	cin>>nc;
	for(int z=0;z<nc;z++){
		if(z!=0)cout<<'\n';
		cin>>str;
		cin.ignore();
		cout<<"Case "<<z+1<<": ";
		for(int i=0;i<str.size();i++){
			if(isalpha(str[i])){
				let+=str[i];
			}
			if(isdigit(str[i])){
				num+=str[i];
				if(isdigit(str[i+1])){
					num+=str[i+1];
					if(isdigit(str[i+2])){
						num+=str[i+2];
					}
				}
			fnum = stoi(num,nullptr,10);
			for(int j=0;j<fnum;j++)cout<<let;
			let="";
			num="";
			fnum=0;
			}
		}
	}
	cout<<'\n';
}
