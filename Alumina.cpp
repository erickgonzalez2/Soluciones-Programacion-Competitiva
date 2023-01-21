#include <iostream>
#include <algorithm>
 using namespace std;
 
 int main(){
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
 	}
 	
 	for(int i=0;i<n;i++){
 		if(i==0){
 			cout<<abs(arr[i+1]-arr[i])<<" "<<abs(arr[i]-arr[n-1])<<'\n';
		 }
		 
		else if(i==n-1){
		 cout<<abs(arr[i-1]-arr[i])<<" "<<abs(arr[i]-arr[0])<<'\n';
		 }
		 
		else{
		int m1=abs(arr[i-1]-arr[i]),m2=abs(arr[i+1]-arr[i]),m3;
		if(m1<m2)cout<<m1<<" " ;
		else cout<<m2<<" ";
		m1=abs(arr[i]-arr[n-1]), m2=abs(arr[i]-arr[0]);
		if(m1>m2)cout<<m1<<'\n';
		else cout<<m2<<'\n';
		
	}
}

 	return 0;
	 }
