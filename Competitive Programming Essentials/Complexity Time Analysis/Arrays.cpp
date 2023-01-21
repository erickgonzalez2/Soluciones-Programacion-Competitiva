#include <iostream>

using namespace std;


int main(){
	
	int arr[] = {1,4,5,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
