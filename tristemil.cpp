#include <iostream>
using namespace std;
int main(){
	unsigned long long int a,b;
	cin>>a>>b;
	
	while(1){
	if(a==b){
		cout<<"felizmil";
		return 0;;
	}
	else a*=2;
	if(a>b)break;
	}
	
	while(1){
	if(a==b){
		cout<<"felizmil";
		return 0;;
	}
	else b*=2;
	if(b>a){
		cout<<"tristemil";
		return 0;
	}
	}

}
