#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int cal,pon;
	
	
	cin>>n;
	
	int arr[n];
	int i=0;
	int tot = 0;
	int p = n;
	while(n--){
		
		
		cin>>cal>>pon;				
		arr[i] = cal;
		i++;
		tot = tot + (cal*pon/10);
	}
	
	tot/=10;
	
	for(i=0;i<p;i++){
		for(int j=0;j<arr[i];j++){
			cout<<'*';
		}
		cout<<'\n';
	}
		
	
	
	if(tot>=6)cout<<tot<<'\n'<<":)\n";
	else cout<<"0\n:(\n";	
	
	
}
