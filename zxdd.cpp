#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int i;
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	i=0;
	while(i<=1000){
		for(int j=0;j<n;j++){
		cout<<"x = ["<<i<<"]"<<a[j]<<'\n';
		i++;
		if(i==1000)break;
		}
		if(i==1000)break;
	}
}
