#include <iostream>

using namespace std;

int main(){
	int numeros[1000],var=0,n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>numeros[i];
	}
		for(int j=n-1,i=0;j>=0,i<n;j--,i++){
			if(numeros[i]==numeros[j]){
				var++;
			}
			else{
				var=0;
				break;
			}
			if(var==0)break;
		}
	if(var>0){
		cout<<"SI";
	}
	else{
		cout<<"NO";
	}
	return 0;	
}
	
