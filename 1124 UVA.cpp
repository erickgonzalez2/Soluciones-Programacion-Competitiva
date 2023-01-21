#include <iostream>
using namespace std;

char s[10000];

int main() {
	int i,k;
	string d;
	while(gets(s)){
		k=sizeof(s);
		d=s;
		for(i=0;i<k;i++){
			if(d[i]=='\"')d[i]='d';
		}
		cout<<s;
	}
	return 0;
}
