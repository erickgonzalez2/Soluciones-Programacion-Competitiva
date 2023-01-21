#include <iostream>

using namespace std;

int main(){
	int j=0,n, arr[1000];
	cin>>n;
	for(int i=0; i<n;i++,j++){
		cin>>arr[j];
		while(j>=0 && arr[j-1]==arr[j]){
			arr[j-1]*=2;
			j--;
		}
	}
	cout<<j<<'\n';
	for(j--;j>=0;j--){
		cout<<arr[j]<<'\n';
}
	return 0;
}
