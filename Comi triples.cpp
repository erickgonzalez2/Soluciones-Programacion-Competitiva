#include <iostream>
using namespace std;

int main()
{
	int n,t=0;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<n+1;i++){
	cin>>arr[i];
	if(arr[i]%3==0)t++;
	}
	if(t==0) cout<<"no hay triples";
	else cout<<t<<'\n';
	
	for(int i=1;i<n+1;i++){
		if(arr[i]%3==0) cout<<i<<" ";
	}
	
	return 0;
}
