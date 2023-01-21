#include <iostream>
#include <string>
using namespace std;
int main(){
	string c;
	int k;
	char sd;
	while(1){
		cin>>sd>>c;
		k=sizeof(c);
		for(int i=0;i<k;i++){
			if(sd==c[i]){
				c.erase(i);
			}
		}
		cout<<c<<'\n';
	}
	
}
