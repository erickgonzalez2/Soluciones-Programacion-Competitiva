#include<iostream> 
using namespace std;
 int main ()
 { 	
 	int n,p; 
	cin>>n >>p; 
	int a[p]; 
	int b[n]={0}; 
	for(int i=0;i<p;i++){ 
		cin>>a[i]; 
	} 
	for(int j=0;j<p;j++)
	{ 
	b[a[j]-1]++; 
	}
	for(int i=0;i<n;i++){ 
	cout<<i+1<<"-"<<b[i]<<endl; 
	} 
	return 0 ; 
	}
