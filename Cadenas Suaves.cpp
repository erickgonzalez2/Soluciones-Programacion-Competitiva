#include <iostream>
#include <string>
using namespace std;

int main(){
	char x;
	cin>>x;
	int cont=0,i;
	char j=x;
	while(x!=0){
		i++;
		cin>>x;
		if(j!=x){
			cont++;
		}
	}
	cout<<cont;
}
