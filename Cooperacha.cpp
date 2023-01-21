#include <iostream>
using namespace std;

int main(){
	int n, dinero[n],suma=0;
	cin>>n;
	if(n > 0 &&  n <= 10^6){
	
	for(int i=0;i<n;i++){
		cin>>dinero[i];
	}
	for(int i=0 , j=0;i<n,j<n;i++,j++){
		j++;
		suma=suma+dinero[i];
		suma=suma-dinero[j];
		i++;
	}
	cout<<suma<<'\n';
}
	return 0;
}
