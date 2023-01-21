#include <iostream>
 using namespace std;
int main(){
	int n,j=0;
	cin>>n;
	int arr[n], arr2[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]%2==0){
			arr2[j]=arr[i];
			j++;
		}
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			arr2[j]= arr[i];
			j++;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr2[i]<<" ";
	}
	
	return 0;
}


