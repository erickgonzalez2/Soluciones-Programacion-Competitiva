#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=0;
	while(1){
		for(int j=0;j<n;j++){
			cout<<"N["<<i<<"] = "<<j<<'\n';
			i++;
			if(i>999)break;
		}
		if(i>999)break;
	 }
	}
