#include <bits/stdc++.h>
using namespace std;
int main(){
	long int a1,a2,aux;
	cin>>a1>>a2;
	if(a1>a2)swap(a1,a2);
	for(long int i=a1+1;i<a2;i++){
	if(i%5 == 2 || i%5==3)cout<<i<<'\n';
	}
}
